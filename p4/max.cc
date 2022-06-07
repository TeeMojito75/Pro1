#include <iostream>
using namespace std;

int main() {
    int n, m, max;

    while (cin >> n) {
        cin >> max;
        for (int i = 1; i < n; ++i) {
            cin >> m;
            if (m > max) max = m;
        }
        cout << max << endl;
    }
}
