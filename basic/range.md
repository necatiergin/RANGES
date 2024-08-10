Bir _range_ bir _concept_'tir. Belirli koşulları sağlayan bir nesne bir _range_'dir. Yüksek seviyede bir soyutlama ile bir _range_ dolaşılabilen _(iterate)_ bir varlıktır. <br>

Bir _range_ dolaşımın başlanacağı bir konum _(iterator)_ ve dolaşım sonunda varılacak bir noktayı belirleyen bir _sentinel_ ile temsil edilir. 
_Sentinel_, başlangıç _iteratörü_ ile aynı türden olabileceği gibi farklı bir türden de olabilir. _sentinel_'in farklı bir türden olabilmesi aralığın aynı türden iki _iteratör_ ile temsil edilmesine göre daha fazla olanak sağlar. _range_ doğrudan bir tür değildir. 
Yani bir veri türünün bir _range_ olarak kullanılabilmesi kalıtım ilişkiyle sağlanmaz. _std::range_ _concept_'ini karşılayan _(satisfy)_ her tür bir _range_ olarak kullanılabilir.<br>
_C++20_ standardıyla dile eklenen _std::ranges_ kütüphanesi yine _C++20_ standardı ile dile eklenen _concept_'leri kullanmaktadır. _std::ranges_ kütüphanesini daha iyi anlayabilmek için önce _concept_'leri anlamamız ve öğrenmemiz gerekir.
