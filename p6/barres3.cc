#include <iostream>
using namespace std;

void barra(int n) {
    if (n == 1) cout << "*" << endl;
    else {
        barra(n-1);
        barra(n-1);
        for (int i = n;i>0;--i)cout << "*";
        cout << endl;

    }
}

int main() {
    int x;
    cin >> x;
    barra(x);
}
