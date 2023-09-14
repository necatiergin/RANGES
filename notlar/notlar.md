container'ların range paramretli ctor'ları halen yok:
Bir range'i bir container'e nasıl dönüştüreceğiz

eric niebler'in range-v3 kütüohanesinde var.
C++20 standartı ile benzeri standart hale geliyor

rng bir range olsun. Ve bu range'i bir container'a örneğin bir std::vector'er dönüştürmek isteyelim.


vector<int> ivec(rng);

Kapların böyle bir ctor'ı olmadığı için sentaks hatası
eric niebler'in kütüphanesinde 
to fonksiyonu bıu işi hallediyor
bu fonksiyon C++23 ile standar t oluyor

auto v = std::ranges::to<std::vector>(r);

Peki böyle bir fonksiyon yok ise ne yapacağız?

vector v(rng.begin(), rng.end());

ya da 

vector v(std::ranges::begin(rng), std::ranges::end(rng));

Ama burada da şöyle bir sorun var.
Bunların aynı ytürden olması gerekiyuor
birçok tange için begin ve end dönüşleri farklı türden
eğer bunların türleri aynı ise böyle range'lere common_range diyoruz
common_rangler coomon_range concept'ini kRŞILIYORLAER

COMMON RANGE OLMAYAN BİR RABNEGİ COMMON RANGE E DÖNÜŞTÜREBİLİRİ<

auto crng = std::views::common_range(rng);

ama bu da bütün range'ler için çalışmıytoe
basic_istream_view gibi kiteratorleri kopyalanamayan rangleler common range e dönüştürülemiyorlar
başka hangi yollar olabilir,

önce container'i default init edip sonra ona insert edeliö
ama burada da CTAD kullanılmaz
std::vector<mytype> vec;
std::ranges::copy(rng, std::back_inserter(vec));
idare eder. Ama türün ne olduğunu yazmak zor olabilir

range_value_t yardımcısını kullanabiliriz<

std::vector<std::ranges::range_value_t<decltype(rng)>> vec;
std::ranges::copy(rng, std::back_inserter(vec));
burada reserve fonlksiyonu çağırmak daha iy bir fikir
ancak bunun için de range'in size'ın bilmemsi gerekiyor
bu un için de sized range olması gerekir


if constexpr(std::ranges::sized_range<decltype(r)>) {
    v.reserve(std::ranges::size(r));
}

std::ranges::copy(r, std::back_inserter(v));
