#include <iostream>
#include <cstdlib>
auto main (int argc, char* argv[]) -> int {
srand(time(NULL));
const int a = rand()% 100 + 1;
std::cout<<"Guess the number!\n";
int b;
do {
std::cin>>b;
if (a<b){
std::cout<<"Your number is too big!\n";
} 
else if (a>b) {
std::cout<<"Yur number is too small!\n";
}
} while (a!=b);
std::cout<<"You're goddamn right!\n";
return 0;
}

