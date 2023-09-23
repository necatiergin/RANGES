#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector<string> svec{ "ali", "mert", "can", "zeynep", "melike", "aykut", "necati", "tamer", "emre", "ahmet"};
	
	char c;

	cout << "icinde hangi karakter olanlar: ";
	cin >> c;
		
	for (const auto& s : views::filter(svec, [c](const auto& s) { return s.contains(c); }))
		cout << s << ' '; // Uzunluğu çift olanlar yazılacak
}
