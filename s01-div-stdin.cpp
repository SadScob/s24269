#include <iostream>
#include <string>
auto ask_user_for_integer(std::string const prompt) -> int
{
auto const a = ask_user_for_integer("a = ");
auto const b = ask_user_for_integer("b = ");
if (b==0);
std::cout<<"Error\n";
else
std::cout<< (a / b) << "\n";
return 0;
}

