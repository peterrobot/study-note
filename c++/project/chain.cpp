#include <iostream>
using namespace std;

// Struct
struct ch{
    int num;
    ch *next;
};

//Class
class chain{
    public:
        ch *cn[10];
        void create(int size);
        void create(void);
        void read(unsigned int k);
        void order(unsigned int k);
    
    private:
        unsigned int pl = 0;
        unsigned int SIZE[10];
};

// Defination of class

void chain::create(int size){
    cout << "Now start creating chain\n";
    ch *HEAD = new ch;
    while(size < 2){
        cout << "Error, Expect a number greater than 2\n";
        cin >> size;
    }
    SIZE[pl] = size;
    ch *p = new ch;
    ch *t;
    cin >> HEAD->num;
    HEAD->next = p;
    while(--size){
        cout << "size: " << size << endl;
        cin >> p->num;
        cout << p << endl;
        if(size < 2){
            p->next = NULL;
            cn[pl] = HEAD;
            cout << "The number of chain is " << pl << endl;
            ++pl;
            return;
        }
        t = p;
        p = new ch;
        t->next = p;
    }
}

void chain::create(void){
    cout << "Now start creating chain.\n Expect 0 after two elements to end.\n";
    SIZE[pl] = 1;
    ch *HEAD = new ch;
    ch *p = new ch;
    ch *t;
    cin >> HEAD->num;
    HEAD->next = p;
    while(++SIZE[pl]){
        cout << "size: " << SIZE[pl] << endl;
        cin >> p->num;
        cout << p << endl;
        if(p->num == 0){
            p->next = NULL;
            cn[pl] = HEAD;
            cout << "The number of chain is " << pl;
            ++pl;
            return;
        }
        t = p;
        p = new ch;
        t->next = p;
    }
}

void chain::read(unsigned int k){
    ch *READ = cn[k];
    if(READ->next == NULL){
        cout << "Error, Expect a head of chain\n";
        return;
    }
    ch *p = READ->next;
    cout << READ->num << endl;
    while(p->next != NULL){
        cout << p->num << endl;
        cout << p << endl;
        p = p->next;
    }
    cout << p->num << endl;
    return;
}

/*
void chain::order(unsigned int k){
    ch *READ = cn[k];
    unsigned int size = SIZE[k];
    if(READ->next == NULL){
        cout << "Error, Expect a head of chain\n";
        return;
    }
    ch *p = READ->next;
    
}
*/

// Main function
int main(){
    cout << "Programme started.\n";
    chain basic;
    int size;
    cout << "Please enter the size.\n";
    cin >> size;
    basic.create(size);
    cout << "Check the chain of the number.\n";
    unsigned int chose;
    cin >> chose;
    basic.read(chose);
    system("pause");
    return 0;
}
