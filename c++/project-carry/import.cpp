#include "import.h"

bool importString::importFromFile(const char* filename)
{
    std::ifstream importFile;
    importFile.open(filename);
}

bool importString::importFromTerminal()
{
    const int charLengh = 25;
    char in[charLengh];
    do
    {
        std::cin.get(in, charLengh).get();
    } while (true);
    
}