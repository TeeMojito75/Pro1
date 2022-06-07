#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<char> Fila;
typedef vector<Fila> Matriu;

// Reads matrix n x m from cin
void OmplirMatriu(Matriu& a){
 int n = a.size();
 int m = a[0].size();
 for (int i=0; i < n; ++i){
    for (int j=0; j < m; ++j){
     cin >> a[i][j];
    }
 }
}

// Prints the matrix to cout
void ImprimirMatriu(const Matriu& a){
 int n = a.size();
 int m = a[0].size();
 for (int i=0; i < n; ++i){
    cout << a[i][0];
    for (int j=1; j < m; ++j){
     cout << " " << a[i][j];
    }
    cout << endl;
 }
 cout << endl;
}

// Sort each row of the matrix
void OrdenarCaractersCadaFila(Matriu& a){
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        sort(a[i].begin(), a[i].end());
    }
}

// Checks if row a is greater than b (called from SortRows)
bool MesGran(const Fila& a, const Fila& b){
    return a > b;
}

// Swap two rows of the matrix (called from SortRows)
void SwapRows(Fila &a, Fila& b){
    Fila aux = a;
    a = b;
    b = aux;
}

// Sort matrix by rows using Bubble sort or Selection sort (your choice)
void SortRows(Matriu& v){
    int last = v.size() - 1;
    while (last > 0) {
        int last_swap = 0;
        for (int i = 0; i < last; ++i) {
            if (MesGran(v[i], v[i + 1])) {
                SwapRows(v[i], v[i + 1]);
                last_swap = i;
            }
        }
        last = last_swap;
    }
}

int main(){
  int n,m;
  while (cin >> n >> m){
    Matriu a(n, Fila(m));
    OmplirMatriu(a);
    OrdenarCaractersCadaFila(a);
    SortRows(a);
    ImprimirMatriu(a);
   }
}
