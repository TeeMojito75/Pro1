#include <iostream>
#include <vector>
using namespace std;

void invertir(vector<int>&v) {
    int n = v.size();
    for (int i = 0; i < n/2; ++i) {
        int aux = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = aux;
    }
}

int main() {
    int n;
    while (cin >> n) {
        bool final = false;
         vector <int> v(n);
         for (int j = 0; j<n; ++j){
        cin >> v[j];
        }
        invertir(v);

        for (int r = 0; r < n; ++r) {
            if (r == n-1) final = true;
            if (final) cout << v[r];
            else cout << v[r] << ' ';
        }
        cout << endl;
    }

}
