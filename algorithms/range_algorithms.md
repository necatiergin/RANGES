- _std::ranges_ kütüphanesiyle gelen yeni algoritmalar <algorithm> başlık dosyasında _std::ranges_ isim alanı içinde
- _concept_'ler ile kısıtlanmış (_constraint_ edilmiş). Yani ranges kütüphanesi büyük ölçüde _concept_'leri kullanıyor.
- _STL_ algoritmalarına benziyor. Ancak iterator çifti yanısıra doğrudan bir _range_'i argüman olarak alabiliyor.
- iterasyon içsel olarak algoritma tarafından kontrol ediliyor.
- _projection_ parametresi kullanabiliyoruz. (Bu özellik _STL_ algoritmalarında yok)
- _begin_ ve _end_ iteratorlerinin aynı tüden olmaları gerekmiyor.
- _std::ranges_ algoritmalarının geri dönüş değerleri iyileştirilmiş, geliştirilmiş. Daha fazla bilgi veriyor. <br>
STL'de yalnızca iterator döndüren bazı algoritmaların geri dönüş türleri ranges kütüphanesinde iterator içeren _struct_'lar.<br>
algoritmadan elde edilen bilgiler _discard_ edilmiyor.
