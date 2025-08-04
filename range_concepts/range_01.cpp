namespace std::ranges {
  template<class T>
  concept range = requires(T t) {
    ranges::begin(t); // bir başlangıç iterator'ü elde edilebilmeli
    ranges::end(t);   // bir bitiş sentinel’i (ya da iterator) elde edilebilmeli
  };
}
