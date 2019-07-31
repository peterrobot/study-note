#include <iostream>
#include <array>
#include <cstring>
#include <vector>
using namespace std;

int main(){
    const int size = 3;
    double chuck[13];
    char temp[30];
    cin.get(temp,30).get();
    char* string_0 = new char[strlen(temp)+1];
    strcpy(string_0, temp);
    cout << "string_0: " << string_0 << " sting_0's size: " << strlen(string_0) << " " <<  endl;
    int *k;
    k = new int;
    *k = 0;
    for(int i = 0; i < size; i++)
    {
        cout << "The " << *k << " chuck ";
        cin >> chuck[*k];
        (*k)++;
    }
    delete (k);
    vector<double> vd(sizeof(chuck) / sizeof(chuck[0]));
    k = new int;
    *k = 0;
    int size_1 = sizeof(chuck) / sizeof(chuck[0]);
    cout << size_1 << endl
        << sizeof(chuck) << endl
        << sizeof(chuck[0]) << endl;
    for (int i = 0; i < size_1; i++){
        cout << "For the " << *k << " vd, the chunk[" << *k << "] is"<< chuck[*k] << endl;
        vd[*k] = chuck[*k];
        (*k)++;
    }
    cout << vd[0];
    system("pause");
    return 0;
}