#include <iostream>
#include <string>
auto main (int argc, char* argv[]) -> int
{
auto const a = std::string(argv[1]);
std::string b;
do {
std::cout << "Type again\n";
std::cin >> b; 
} while (b!=a);
std::cout <<"Good job boiiii!\n";
return 0;
}

