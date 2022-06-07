#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Flag;

Flag read_flag(int n) {
    Flag fl(n, Row(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> fl[i][j];
        }
    }
    return fl;
}

int column_count(const Flag& fl) {
    int n = fl[0].size();
    int c = 0;
    int aux;

    for (int i = 0; i < n; ++i) {
        int k = 0;
        for (int j = 1; j < n; ++j) {
            if (fl[j][i] != fl[j - 1][i]) ++k, aux = j;
        }
        if (k == 1 and aux >= (n - 1 - i)) ++c;
    }
    return c;
}


int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
    }
}
