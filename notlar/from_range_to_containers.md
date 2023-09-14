_rng_ bir _range_ olsun. Ve bu _range_'i bir _container_'a örneğin bir _std::vector_'e dönüştürmek isteyelim:

```
vector<int> ivec(rng);
```
Kapların böyle bir kurucu işlevi olmadığı için yukarıdaki kod sentaks hatası oluşturacak. Eric Niebler'in kütüphanesinde to isimli fonksiyon bu işi görüyor. 
Bu fonksiyon C++23 standardı ile dile ekleniyor:
```
auto v = std::ranges::to<std::vector>(r);
```
Peki böyle bir fonksiyon yok ise ne yapacağız?
```
std::vector vec(rng.begin(), rng.end());
```
ya da 

```
vector vec(std::ranges::begin(rng), std::ranges::end(rng));
```
Ama burada da şöyle bir sorun var. Kurucu işleve gönderilen argümanların aynı türden olması gerekiyor.
Birçok range için _begin_ ve _end_ fonksiyonlarının geri dönüş türleri farklı. 
Eğer bunların türleri aynı ise böyle _range_'ler _common_range_ diyoruz.
_common_range_'ler _common_range_ concept'ini karşılıyorlar.

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
