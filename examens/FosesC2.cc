#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int total = 0, actual;
        cin >> actual;
        int pos_min = actual + 1;
        int posterior;
        cin >> posterior;
        while (posterior != 0) {
            if (actual < pos_min) {
                if (actual < posterior) ++total;
                pos_min = actual;
            }
            actual = posterior;
            cin >> posterior;
        }
        cout << total << endl;
    }
}
