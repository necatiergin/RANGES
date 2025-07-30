#include <ranges>
#include <iostream>

struct cstr_range {
    const char* ptr;

    const char* begin() const { return ptr; }
    
    struct sentinel {
        bool operator==(const char* p) const 
        {
            return *p == '\0'; 
        }
    };
    
    sentinel end() const 
    {
        return {}; 
    }
};

int main() 
{
    cstr_range r{ "merhaba" };

    for (char c : r)
        std::cout << c << ' ';
}
