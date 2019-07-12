#include <iostream>
#include <string>
#include <cstring>
#include <windows.h>

//void HelloWorld();
//void arrayTest(void);

int main(){
    //HelloWorld();
    //arrayTest();
    //structTest();
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
