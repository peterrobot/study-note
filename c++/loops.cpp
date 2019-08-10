#include <iostream>
using namespace std;
int main(){
    int x;
    while(cin >> x){
        if(x==0)
            break;
        cout << x;
    }
    cin >> x;
    for (int i = x; i > 0; --i)
        cout << i << "\t";
    for (int i = x; i > 0; i--)
        cout << i << "\t";
    system("pause");
    return 0;
}