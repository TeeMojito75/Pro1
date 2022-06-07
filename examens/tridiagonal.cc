#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: mat is an n*n square matrix, where n >= 2
// Post: it returns true if mat is a zero-sum tridiagonal matrix,
//       false otherwise
bool is_zerosum_tridiagonal(const Matrix& mat) {
      int c = mat.size();
      int centre = 0;
      int sup = 0;
      int inf = 0;
      for (int i = 0; i < c; ++i) {
          for (int j = 0; j < c; ++j) {
              if ((i != j and i - 1 != j and i + 1 != j) and mat[i][j] != 0) return false;
              else if (i == j or i == j + 1 or i + 1 == j) {
                  if (i == j) centre += mat[i][j];
                  if (i - 1 == j) sup += mat[i][j];
                  if (i + 1 == j) inf += mat[i][j];
            }
        }
    }
    if ((sup + inf) - centre == 0) return true;
    return false;
}


Matrix read_matrix(int n) {
    Matrix m(n, Row(n));
    for (int i=0; i < n; ++i)
          for (int j = 0; j < n; ++j)
               cin >> m[i][j];
    return m;
}

int main() {
    int n;
    while (cin >> n) {
          Matrix a = read_matrix(n);
          if (is_zerosum_tridiagonal(a)) cout << "TRUE" << endl;
          else cout << "FALSE" << endl;
    }
}
