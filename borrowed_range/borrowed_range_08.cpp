#include <ranges>

namespace std::ranges {

    template<
        input_iterator I, sentinel_for<I> S, class T, class Proj = identity>
        requires indirect_binary_predicate<ranges::equal_to, projected<I, Proj>, const T*>
    constexpr I Find(I first, S last, const T& value, Proj proj = {}) {
        for (; first != last; ++first) {
            // projection çağrısı std::invoke ile yapılır
            if (ranges::invoke(proj, *first) == value) {
                break;
            }
        }
        return first; 
    }

    
    template<
        input_range R, class T, class Proj = identity>
        requires indirect_binary_predicate<ranges::equal_to,
    projected<iterator_t<R>, Proj>, const T*>
    constexpr borrowed_iterator_t<R>
        Find(R&& r, const T& value, Proj proj = {}) {
        
        return ranges::find(ranges::begin(r), ranges::end(r), value, std::ref(proj));
        // DÖNÜŞ TÜRÜNE DİKKAT: borrowed_iterator_t<R>
    }

} // namespace std::ranges
