#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void suprimeix(Matriu& m, int x, int y, int& cont) {
    int f = m.size();
    int c = m[0].size();
    int i = x;
    bool conte = false;
    while (i < f and m[i][y] != 0) {
        int j = y;
        while (j < c and m[i][j] != 0) {
            m[i][j] = 0;
            conte = true;
            ++j;
        }
        ++i;
    }
    if (conte) ++cont;
}



int main() {
    int m, n;
    while (cin >> m >> n){
    Matriu camps(m, Fila(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> camps[i][j];
        }
    }
    int conreus = 0;
     for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
           if (camps[i][j] != 0) suprimeix (camps, i, j, conreus);
         }
      }
      cout << conreus << endl;
   }
}
