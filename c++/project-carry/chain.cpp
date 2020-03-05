#include "arrays.h"

template<typename T>
chain<T>::chain()
{
    HEAD = new node;
    HEAD->NEXT = nullptr;
    SIZE = 0;
};

template<typename T>
bool chain<T>::addAfter(T in,int pos)
{
    if(pos>SIZE)
        return false;
    node *NEXT;
    NEXT = HEAD->NEXT;
    for (int i = 0; i < pos; i++){
        NEXT = NEXT->NEXT;
    }
    node *adding = new node;
    adding->s = in;
    adding->NEXT = NEXT->NEXT;
    NEXT->NEXT = adding;
    ++SIZE;
    return true;
};

template<typename T>
void chain<T>::add(T in)
{
    node *NEXT = HEAD->NEXT;
    while(NEXT->NEXT!=nullptr)
        NEXT = NEXT->NEXT;
    node *adding = new node;
    adding->s = in;
    adding->NEXT = nullptr;
    NEXT->NEXT = adding;
    ++SIZE;
}

template<typename T>
T chain<T>::read(unsigned int pos)
{
    if(pos>SIZE)
        return null;
    node *p = HEAD;
    while (pos>0)
    {
        p = p->NEXT;
        --pos;
    }
    return p->s;
}
