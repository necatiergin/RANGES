[kaynak makale](https://timur.audio/how-to-make-a-container-from-a-c20-range)

_rng_ bir _range_ olsun. Ve bu _range_'i bir _container_'a örneğin bir _std::vector_'e dönüştürmek isteyelim:

```
vector<int> ivec(rng);
```
Kapların böyle bir kurucu işlevi olmadığı için yukarıdaki kod sentaks hatası oluşturacak. _Eric Niebler_'in kütüphanesinde _to_ isimli fonksiyon bu işi görüyor. 
Bu fonksiyon _C++23_ standardı ile standart kütüphaneye ekleniyor:
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
Birçok _range_ için _begin_ ve _end_ fonksiyonlarının geri dönüş türleri farklı. 
Eğer bunların türleri aynı ise böyle _range_'ler _common_range_ diyoruz.
_common_range_'ler _common_range_ _concept_'ini karşılıyorlar.

_common range_ olmayan bir _range_'i _common range_'e dönüştürebiliriz.

```
auto crng = std::views::common_range(rng);
```
Ancak bu da bütün _range_'ler için çalışmıyor.
_basic_istream_view_ gibi iteratorleri kopyalanamayan _range_'ler _common range_'e dönüştürülemiyorlar. 
Peki, başka hangi yöntemler söz konusu olabilir?

Önce _container_'i _default constructor_ ile hayata başlatıp edip daha sonra ona _range_'deki öğeleri ekleyebiliriz. Ancak burada _CTAD_'dan faydalanamayız.
```
std::vector<mytype> vec;
std::ranges::copy(rng, std::back_inserter(vec));
```
Ama türün ne olduğunu yazmak zor olabilir. Bu amaçla _range_value_t_ yardımcısını kullanabiliriz:

```
std::vector<std::ranges::range_value_t<decltype(rng)>> vec;
std::ranges::copy(rng, std::back_inserter(vec));
```
Burada _std::vector_ sınıfının _reserve_ üye fonksiyonu çağırmak verim açısından iyi olabilir. 
Ancak bunun için de _range_'in _size_'ının bilinmesi gerekiyor.
Bunun için de _range_'in _sized_range_ olması gerekir:

```
if constexpr(std::ranges::sized_range<decltype(r)>) {
    v.reserve(std::ranges::size(r));
}
std::ranges::copy(r, std::back_inserter(v));
```
