#include <iostream>
using namespace std;

int factorial(int n) {
    int factorial = 1;
    for (int i = n;i > 0;--i) {
        factorial = factorial*i;
    }
        return factorial;
}

int main() {
    int x;
    cin >> x;

    cout << factorial(x) << endl;
}
