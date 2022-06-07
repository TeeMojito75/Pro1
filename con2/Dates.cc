#include <iostream>
using namespace std;

int compara(int d1, int m1, int a1, int d2, int m2, int a2) {
    int resta1, resta2, resta3, total = 0;

    resta1 = d1 - d2;
    resta2 = m1 - m2;
    resta3 = a1 - a2;
    total = resta1 + resta2 + resta3;
    return total;
}

int main() {
    int i1,l1,p1,i2,l2,p2, pos;
    char x;
    while (cin >> i1 >> x >> l1 >> x >> p1 >> i2 >> x >> l2 >> x >> p2) {
        pos = compara(i1,l1,p1,i2,l2,p2);
        if (pos < 0) cout << "anterior" << endl;
        else if (pos > 0) cout << "posterior" << endl;
        else cout << "iguals" << endl;
    }
}
