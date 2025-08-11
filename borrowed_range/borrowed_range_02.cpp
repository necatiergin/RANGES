// bottowed_range concept

namespace std::ranges {
    template<class T>
    concept borrowed_range = range<T> && (borrowed_iterator<iterator_t<T>>);
}
