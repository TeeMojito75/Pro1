#include <iostream>
using namespace std;

bool es_residual(int a, int b, int c) {
    if (a%b == c) return true;
    return false;
}

int main() {
    int total = 0;
    int n;
    while (cin >> n) {
        int n1, n2, n3;
        int m = n - 2, sub_total = 0;
        cin >> n1 >> n2;
        while (m != 0 and cin >> n3) {
            if (es_residual(n1, n2, n3)) ++sub_total;
            n1 = n2;
            n2 = n3;
            --m;
        }
        cout << sub_total << endl;
        total += sub_total;
    }
    cout << "Total: " << total << endl;
}
