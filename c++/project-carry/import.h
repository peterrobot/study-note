#include "chain.h"
#include <iostream>
#include <fstream>

class importString : public chain<std::string>
{
public:
    bool importFromFile(const char * filename);
    bool importFromTerminal();

private:
    chain<std::string> name;
};