#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i <= m; ++i) {
        int actual, pos = 1, total = 1;
        cin >> actual;
        bool cadena = true;
        while (actual != -1) {
            int posterior;
            cin >> posterior;
            if (actual == posterior) {
                cadena = false;
                ++total;
            }
            if (cadena) ++pos;
            actual = posterior;
            cin >> posterior;
        }
    }
}
