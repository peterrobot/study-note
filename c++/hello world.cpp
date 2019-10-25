#include <iostream>
using namespace std;

int main(){
    cout << "Hello world" << endl;
    int x = 0;
    cin >> x;
    for (int i = x; i > 0; i--)
    {
        for (int i = x; i > 0; i--){
            cout << "fuck ";
        }
        cout << endl;
        x--;
    }
    system("pause");
    return 0;
}