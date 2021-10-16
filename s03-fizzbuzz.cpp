#include <iostream>
#include <string>
auto main (int argc, char* argv[]) ->int{
auto const a =std::stoi(argv[1]);
for (int i = 1; i<=a;i++){
std::cout<< i<<"\n";
if(i%3==0 && i%5==0) {
std::cout<<"FizzBuzz\n";
continue;
}
if (i%3==0){
std::cout<<"Fizz\n";
continue;
}
if (i%5==0){
std::cout<<"Buzz\n";
continue;
}
}
return 0;
}
