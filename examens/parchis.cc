#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool isParchessi(const Matrix& m, int& up, int& down, int& left, int& right) {
    int diag_iz = 0;
    int diag_der = m.size() - 1;
    int c = m.size();
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j > diag_iz and j < diag_der) up += m[i][j];
            if (j < diag_iz and j > diag_der ) down += m[i][j];
            if (j < diag_iz and j < diag_der) left += m[i][j];
            if (j > diag_iz and j > diag_der) right += m[i][j];
        }
        diag_der -= 1;
        diag_iz += 1;
    }
    if ((up == down) and (left == right)) return true;
    return false;
}

int main() {
    int n;
    while (cin >> n) {
        Matrix parchis(n, Row(n));
        for (int i = 0; i < parchis.size(); ++i) {
            for (int j = 0; j < parchis[0].size(); ++j) {
                cin >> parchis[i][j];
            }
        }
        int up = 0, left = 0, down = 0, right = 0;
        if (isParchessi(parchis, up, down, left, right)) cout << "true: " << up << ' ' << down << ", " << left << ' ' << right << endl;
        else  cout << "false: " << up << ' ' << down << ", " << left << ' ' << right << endl;
    }
}
