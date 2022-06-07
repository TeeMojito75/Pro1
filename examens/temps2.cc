#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ht = 0, mt = 0, st = 0;
    for (int i = 0; i < n; ++i) {
        int h = 0, m = 0, s = 0;
        char c;
        cin >> h >> c >> m >> c >> s;
        ht += h;
        mt += m;
        st += s;
    }
    while (st > 59) {
        ++mt;
        st -= 60;
    }
    while (mt > 59) {
        ++ht;
        mt -= 60;
    }

    cout << ht << "H " << mt << "M " << st << 'S' << endl;
}
