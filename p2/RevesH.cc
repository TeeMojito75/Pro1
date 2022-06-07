#include <iostream>
using namespace std;

int main(){
    int n, c;
    cin >> n;

    if (n == 0) cout << n;

    while(n != 0){
        c = n%16;
        n = n/16;

        if (c >= 10) cout << char('A'+c-10);
        else cout << c;
    }
    cout << endl;
}
