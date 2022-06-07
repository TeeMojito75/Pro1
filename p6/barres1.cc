#include <iostream>
using namespace std;

void barra(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        barra(n-1);
        for (int i = n;i>0;--i)cout << "*";
        cout << endl;
        barra(n-1);
    }
}

int main() {
    int x;
    cin >> x;
    barra(x);
}
