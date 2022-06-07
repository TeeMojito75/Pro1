#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, cont = 0;
    cin >> n;
    vector <int> v(n);
    for (int j = 0; j<n; ++j){
        cin >> v[j];
    }
    int ultim = v[n-1];

    for (int i = n-2;i >= 0;--i){
        if (ultim == v[i]) ++cont;
    }
    cout << cont << endl;
}
