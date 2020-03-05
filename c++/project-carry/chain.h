#include <string>
#include <fstream>

template<typename T>
class chain
{
public:
    chain();
    bool addAfter(T in, int pos);
    void add(T in);
    T read(unsigned int pos);

private:
    struct node{
        T s;
        node *NEXT;
    }*HEAD;

    unsigned int SIZE;
};