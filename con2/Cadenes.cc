#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        int actual, posterior, pos = 1, total = 1;
        cin >> actual;
        bool cadena = true;
        while (posterior != -1) {
            cin >> posterior;
            if (actual == posterior) {
                 ++total;
                 cadena = false;
            }
            if (cadena) ++pos;
            actual = posterior;
            cin >> posterior;
        }
        cout << pos << ' ' << total << endl;
    }
}
