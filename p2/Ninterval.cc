#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if(a <= b){
        while(a < b){cout << a << ",";
            a = a + 1;

        }cout << a << endl;
    }
    else cout << endl;
}
