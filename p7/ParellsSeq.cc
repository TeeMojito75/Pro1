#include <iostream>
#include <vector>
using namespace std;

bool es_primo(int n) {
    int d = 2;
    while (d*d <= n) {
        if (n%d == 0) return false;
        ++d;
    }
    if(n <= 1) return false;
    else return true;
}

int main() {
    int n;

    while (cin >> n) {
         vector<int> vect(n);
         for (int i = 0; i < n; ++i) cin >> vect[i];
         int i = 0;
         bool trobat = false;
         while (not trobat and i < n) {
             int j = 0;
             while (not trobat and j < n) {
                 if (i != j) {
                     if (es_primo(vect[i]+vect[j])) trobat = true;
                }
                ++j;
            }
            ++i;
        }
        if (trobat) cout << "si" << endl;
        else cout << "no" << endl;
    }
}
