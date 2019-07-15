#include <iostream>
#include <string>
#include <cstring>

//void HelloWorld();
//void arrayTest(void);

int main(){
    //HelloWorld();
    //arrayTest();
    
    short score[10] = {1,2,3,4,5,6,7,8,9,10};
    using namespace std;
    cout << "This is score[0] " << score[0] << endl ;
    short* p = &score[0];
    cout << p << " ; " << *p << endl;
    p++;
    cout << p << " ; " << *p << endl;
    cout << score << " ; " << &score << endl << *(p+1) << " ; " << *(score+1) ;
    system("pause");
    return 0;
}

/*
void HelloWorld(void){
    using std::cout;
    using std::endl;
    cout << "Hello World";
}*/

/* success DATE 2019.7.7
void arrayTest(void){
    using namespace std;
    const int As = 20;
    char studentName[As];
    string strStuName;
    cout << "please enter the name of student\n";
    cin.get(studentName,As).get();
    strStuName = studentName;
    cout << strStuName << endl
         << strlen(studentName) << endl;
    strStuName += " is stupid";
    cout << strStuName << endl << strStuName.size() << endl;
}*/
