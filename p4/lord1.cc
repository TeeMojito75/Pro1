#include <iostream>
using namespace std;

int main() {
    int n, linia = 1;
    string x, m;
    bool ordenat = false;

    while (cin >> n and not ordenat) {
        ordenat = true;
        cin >> x;
        for (int i = 2;i <= n; ++i) {
            cin >> m;
            if (m < x) ordenat = false;
            x = m;
        }
        if (n == 0) cout <<  "La primera linia ordenada creixentment es la " << linia << '.' << endl;
        else if (ordenat) cout << "La primera linia ordenada creixentment es la " << ++linia << '.' << endl;

    }
    if (not ordenat) cout << "No hi ha cap linia ordenada creixentment." << endl;
}
