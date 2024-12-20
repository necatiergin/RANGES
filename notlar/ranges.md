* Bir _range_ dolaşabildiğimiz bir varlık. İki _iterator_ ile temsil ediliyor: _range_'in başlangıcını gösteren bir _iterator_ ve bir _sentinel_. 
_Sentinel_ _range_'in sonunu gösteriyor. _Sentinel_, _iterator_ ile aynı türden de farklı türden de olabilir. Bunların farklı türlerden olabilmesi eski _STL_'de olmayan bazı olanakları sağlıyor.

* _range adaptor_ : bir ya da birden fazla _range_'i input olarak alıp alıp uyarlanmış _range_'i output olarak veren algoritmalar.
* _range factory_ : Bir _input_ almadan _(output olarak)_ bir _range_ döndüren algoritmalar.
* _sized range_ : O(1) karmaşıklığında _size_ fonksiyonu veren _range_'ler.
* bir range'in _const iterable_ olup olmadığı da önemli. Uyarlanmış _range_ türünden _const_ bir _range_ nesnemiz olsun. Bu _range_'i dolaşabilir miyiz? Bütün _range_'ler için  bu sorunun cevabı evet değil.
* _borrowed range_: _range_'e bir _iterator_ alalım. _range_ nesnesinin hayatının bitmsine karşın _iterator_ halen _dangling_ durumda olmayabiliyorsa _borroWED range_'dir.
