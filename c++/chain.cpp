#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//Function

int main(){
    const int MAX = 10;
    struct student
    {
        int score;
        student *NEXT;
    }*HEAD,*p,*t;
    int InPut;
    HEAD = new student;
    p = new student;
    HEAD->NEXT = p;
    for(int i=0;i<MAX;i++){
        cout << "Please enter the score of " << i+1 << " student." << endl;
        cin >> InPut;
        cout << "The memory adress is " << p << ".\n";
        p->score = InPut;
        t = p;
        p = new student;
        t->NEXT = p;
    }
    p->NEXT = NULL;
    cout << endl
         << "Here is the output.\n";
    p = HEAD->NEXT;
    int i = 1;
    do{
        cout << "Now the score of " << i  << " student is " << p->score << endl;
        cout << "The memory adress is " << p << endl;
        p = p->NEXT;
        i++;
    } while (p->NEXT != NULL);
    system("pause");
    return 0;
}