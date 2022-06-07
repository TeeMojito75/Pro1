#include <iostream>
using namespace std;

int suma_parells(int n) {
    if (n < 10 and n%2 == 0) return n;
    else if (n < 10 and n%2 != 0) return 0;
    else {
        int d = n%10;
        if (d%2 == 0) return d + suma_parells(n/10);
        else return suma_parells(n/10);
    }
}

int main() {
    int x;
    while (cin >> x) cout << suma_parells(x) << endl;
}
