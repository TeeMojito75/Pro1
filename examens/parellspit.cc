#include <iostream>
using namespace std;

int max(int a, int b) {
    if (a > b) return a;
    return b;
}

bool is_ptg(int a, int b) {
    int i = max(a, b) + 1;
    int res = a*a + b*b;
    while (i*i <= res) {
        if (i*i == res) return true;
        ++i;
    }
    return false;
}

int main() {
    int pos = 1;
    int n1, n2;
    bool trobat = false;
    cin >> n1;
    while (not trobat and cin >> n2) {
        if (is_ptg(n1, n2)) {
            cout << "First pythagorean pair " << n1 << ' ' << n2;
            cout << " at position " << pos << endl;
            trobat = true;
        }
        n1 = n2;
        ++pos;
    }
    if (not trobat) cout << "No pythagorean pairs" << endl;
}
