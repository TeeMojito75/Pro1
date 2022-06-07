#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: mat is an n*n square matrix, where n >= 2
// Post: returns true if mat is an ascending tridiagonal matrix,
// false otherwise
bool is_asc_tridiagonal(const Matrix& mat){
      int n = mat.size();
      for (int i = 0; i < n; ++i) {
          for (int j = 0; j < n; ++j) {
              if (i == j or i + 1 == j or i - 1 == j) {
                  if (i + 1 < n and j + 1 < n) {
                      if (mat[i][j] > mat[i + 1][j + 1]) return false;
                }
            }
            else if (mat[i][j] != 0) return false;
        }
    }
    return true;
}

Matrix read_matrix(int n) {
    Matrix m(n, Row(n));
    for (int i = 0; i < n; ++i)
          for (int j = 0; j < n; ++j)
               cin >> m[i][j];
    return m;
}

int main() {
    int n;    // dimension of the matrix
    while (cin >> n) {
          Matrix a = read_matrix(n);
          if (is_asc_tridiagonal(a)) cout << "TRUE" << endl;
          else cout << "FALSE" << endl;
     }
}
