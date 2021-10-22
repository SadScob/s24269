#include <iostream>
#include <string>
#include <string.h>

int main(int argc, char *argv[]) {
    int nob;
    if (argc == 2) {
        nob = std::stoi(argv[1]);
    } else {
        nob = 99;
    }
    while (true) {
        std::cout << nob << "bottles of beer on the wall, " << nob << " bottles of beer.\n";
        nob--;
        std::cout << "Take one down, pass it around, " << nob <<"bottle of beer on the wall..\n";
        if (nob == 2) break;
    }

    int x=2;
    std::cout << x<<"bottles of beer on the wall, " <<x<< " bottles of beer\n";
    std::cout <<"Take one down, pass it around, "<< x-1 <<" bottle of beer on the wall..\n";
    std::cout <<"Take one down, pass it around, no more bottle beer on the wall..\n";

    return 0;
}


