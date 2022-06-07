#include <iostream>
#include <vector>
using namespace std;

//Pre: n >= 0, n nomes en minúscules
//Post: noms fora repetir, després de cada cas una línia

int main() {
    int n;
    while (cin >> n) {
        vector<string> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << v[0] << endl;
        for (int i = 1; i < n; ++i) {
            bool inside = false;
            int j = 0;
            while (not inside and j < i) {
                if (v[i] == v[j]) inside = true;
                ++j;
            }
            if (not inside) cout << v[i] << endl;
        }
        cout << endl;
    }
}
