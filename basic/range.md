Bir _range_ bir _concept_'tir. Belirli koşulları sağlayan bir nesne bir _range_'dir. Yüksek seviyede bir soyutlama ile, bir _range_ dolaşılabilen _(iterate)_ bir varlıktır. <br>

Bir _range_ dolaşımın başlanacağı bir konum _(iterator)_ ve dolaşım sonunda varılacak bir noktayı belirleyen bir _sentinel_ ile temsil edilir. 
_Sentinel_, başlangıç _iteratörü_ ile aynı türden olabileceği gibi farklı bir türden de olabilir. _sentinel_'in farklı bir türden olabilmesi aralığın aynı türden iki _iteratör_ ile temsil edilmesine göre daha fazla olanak sağlar. _range_ doğrudan bir tür değildir. _range_ niteliğindeki nesneler aynı türden değildir. Aynı koşulları sağlayan nesnelerdir.
Yani bir veri türünün bir _range_ olarak kullanılabilmesi kalıtım ilişkiyle sağlanmaz. _std::range_ _concept_'ini karşılayan _(satisfy)_ her tür bir _range_ olarak kullanılabilir.<br> Örneğin bir fonksiyon kendisini çağıran bir koddan bir _range_ talep ediyorsa _generic_ kodda derleme zamanında _template_ parametresinin _std::range concept_'ini sağlayıp sağlamadığına bakılır. _C++20_ standardıyla dile eklenen _std::ranges_ kütüphanesi yine _C++20_ standardı ile dile eklenen _concept_'leri kullanmaktadır. _std::ranges_ kütüphanesini daha iyi anlayabilmek için önce _concept_'leri anlamamız ve öğrenmemiz gerekir.<br>

std::range concept'i ranges başlık dosyasında aşağıdaki gibi tanımlanmıştır:

```cpp
template< class T >
concept range = requires( T& t ) {
    ranges::begin(t); // equality-preserving for forward iterators
    ranges::end (t);
};
```

_std::ranges_ kütüphanesi ile gelen yeni algoritmalara bir _iteratör_ çifti geçilebildiği gibi bir _container_ nesnesi ya da bir _C dizisi_ doğrudan geçilebilmektedir:

```cpp
#include <vector>
#include <algorithm>
#include <ranges>

int main()
{
	std::vector<int> ivec;
	//...
	std::sort(ivec.begin(), ivec.end());
	std::ranges::sort(ivec);
	//...
}
```

_range_'lerin sağladığı temel avantajlardan biri aralıklar üzerinde çalışan _STL_ algoritmalarını fonksiyonel programlamayı andıran bir biçimde kullandırabilmesidir.


