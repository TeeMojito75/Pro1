#include <iostream>
#include <vector>
using namespace std;

//Pre: -----
//Post: return the position of the last element in v less than x
//                      -1 if none exists
int last_position_of(const vector<int>& v, double x) {
    int n = v.size();
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] < x) return i;
    }
    return -1;
}

int main() {
    int n;
    while (cin >> n) {
        vector<int> v(n);
        int pares = 0;
        int pos = 0;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i]%2 == 0) {
                pares += v[i];
                ++pos;
            }
        }
        cout << last_position_of(v, pares/double(pos)) << endl;
    }
}
