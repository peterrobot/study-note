#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//Function
void chain(void);

int main(){
    cout << "Hello World";
    int x;
    cin >> x;
    return 0;
}

void chain(void){
    const int MAX = 10;
    struct student
    {
        int score;
        student *NEXT;
    }*HEAD,*p,*t;
    int InPut;
    HEAD = new student;
    cin >> InPut;
    p = new student;
    p -> score = InPut;
    p -> NEXT = new student;
    HEAD -> NEXT = p;
    for(int i=0;i<MAX;i++){
        cout << "Please enter the score of " << i+2 << "student." << endl;
        cin >> InPut;
        p = new student;
        p -> score = InPut;
        p -> NEXT = new student;
        t = p;
        t -> NEXT = p;
    }
}