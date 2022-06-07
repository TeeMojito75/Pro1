#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int actual, previ, dist = 1, dist_total = 1;
        int pos_actual = 1, pos = 1, pos_aux = 1;
        cin >> previ >> actual;
        while (actual != -1) {
            ++pos_actual;
            if (actual == previ) {
                ++dist;
                if (dist > dist_total) {
                    dist_total = dist;
                    pos = pos_aux;
                }
            }
            else {
                dist = 1;
                pos_aux = pos_actual;
            }
            previ = actual;
            cin >> actual;
        }
        cout << pos << ' ' << dist_total << endl;
    }
}
