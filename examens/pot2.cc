#include <iostream>
using namespace std;

bool is_power(int n) {
   int i = 1;
   while (i <= n){
        if (i == n) return true;
        i *= 2;
    }return false;
}

int main() {
    int n;
    int pos = 1;
    bool first = true;
    while (cin >> n and n != -1) {
        if (is_power(n) and first) {
            first = false;
        }
        if (first) ++pos;
    }
    if (first) cout << 0 << endl;
    else cout << pos << endl;
}
