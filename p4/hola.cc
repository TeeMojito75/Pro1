#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    char d;
    a = '_'; b = '_'; c = '_';
    cin >> d;
    bool trobat = false;

    while (not trobat and d != '.') {
        if (a == 'h' and b == 'o' and c == 'l' and d == 'a') {
            trobat = true;
        }
        a = b; b = c; c = d;
        cin >> d;

    }
        if (trobat) cout << "hola" << endl;
        else cout << "adeu" << endl;
    }
