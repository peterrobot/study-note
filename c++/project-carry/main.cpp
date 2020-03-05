#include "chain.h"
#include <iostream>
#include <string>

const unsigned int NameSIZE = 150;
const int NameLENGTH = 12;

int main(){
    std::string name[NameSIZE];
    char temp[NameSIZE][NameLENGTH];
    for (size_t i = 0; i < NameSIZE; i++)
    {
        std::cin.get(temp[i], NameLENGTH).get();
    }
    
    return 0;
}