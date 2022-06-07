#include <iostream>
using namespace std;

bool es_perfecte(int n) {
    int s = 1;
    for (int i = 2; i*i <= n;++i){
        if (n%i == 0) s = s + i + n/i;
    }
    if (n != 0 and n != 1) return (s == n);
    else return false;
}

int main() {
    int x;
    while (cin >> x) cout << es_perfecte(x) << endl;
}
