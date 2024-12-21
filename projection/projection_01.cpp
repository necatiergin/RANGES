#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

struct Person {
    int m_id;
    std::string m_name;
};

int main()
{
    using namespace std::literals;
    
    std::vector<Person> users{ 
        {23, "Kagan Aslan"},
        {37, "Necati Ergin"}, 
        {19, "Ali Serce"}, 
        {41, "Oguz Karan"}, 
        {18, "Guray Sonmez"} 
    
    };

    std::ranges::sort(users, {}, &Person::m_id);
    if (auto iter = std::ranges::find(users, "Necati Ergin"s, &Person::m_name); iter != users.end()) {
        std::cout << "found: " << iter->m_id << ' ' << iter->m_name;
    }
    else {
        std::cout << "not found\n";
    }
}



