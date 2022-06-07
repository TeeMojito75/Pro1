#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Valors {
    int num;
    int freq;
};

int main() {
    int n;
    while (cin >> n) {
        Valors last;
        vector<int> valors(n);
        vector<Valors> ordenats;

        for (int i = 0; i < n; ++i) cin >> valors[i];
        sort(valors.begin(), valors.end());

        last.num = valors[0];
        int diferents = 1;

        for (int i = 1; i < n; ++i) {
            if (last.num != valors[i]) {
                last.num = valors[i];
                ++diferents;
            }
        }
        cout << diferents << endl;
    }
}
