#include <iostream>
using namespace std;

//Pre: n >= 0, base > 1;
//Post: returns true when n is a power of base, false otherwise
bool is_power(int n, int base) {
    int num = base;
    while (num < n) {
        num *= base;
    }
    if (num == n) return true;
    return false;
}

int main() {
    int actual;
    while (cin >> actual) {
        int posterior;
        int total_parelles = 0;
        cin >> posterior;
        while (posterior != 0) {
            int i = 2;
            bool trobat = false;
            if (actual == 1 or posterior == 1) ++total_parelles;
            else {
                while (not trobat and i <= actual and i <= posterior) {
                    if (is_power(actual, i) and is_power(posterior, i)) {
                        ++total_parelles;
                        trobat = true;
                    }
                    ++i;
                }
            }
            actual = posterior;
            cin >> posterior;
        }
        cout << total_parelles << endl;
    }
}
