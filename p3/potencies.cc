#include <iostream>
using namespace std;

int main(){
    int a,b;

    while(cin >> a >> b){
        int x = 1, p = 1;
        while(x<=b){
            p *= a;
            ++x;
        }
        cout << p << endl;
    }
}
