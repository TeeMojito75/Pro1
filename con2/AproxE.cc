#include <iostream>
using namespace std;

int factorial(int n) {
    int facto = n;
    for (int i = 1; i <= n-1; ++i) facto *= i;
    return facto;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(10);
    int x;
    double e = 0;
    while (cin >> x) {
       if (x != 0){for (int i = x; i >= 0; --i) e += 1/factorial(double(i));
       cout << "Amb " << x << " terme(s) s'obte " << e << '.' << endl;
       }
       else cout << "Amb " << x << " terme(s) s'obte " << 0.0000000000 << '.' << endl;
    }
}
