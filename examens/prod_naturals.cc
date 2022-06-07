#include <iostream>
using namespace std;

//Pre: x > 0;
int product_of_consecutive(int x) {
    int left = 0, right = x;
    while (left <= right) {
        int m = (left + right)/2;
        if (m*(m + 1) > x) right = m - 1;
        else if (m*(m + 1) < x) left = m + 1;
        else return m;
    }
    return -1;
}

int main() {
    int x;
    while (cin >> x) {
        int k = product_of_consecutive(x);
        if (k == -1) cout << x << " NO" << endl;
        else cout << x << " = " << k << '*' << k + 1 << endl;
    }
}
