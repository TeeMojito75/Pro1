#include <iostream>
#include <vector>
using namespace std;

void intercanvia(double& a, double& b) {
    double c = a;
    a = b;
    b = c;
}

int posicio_maxim(const vector<double>& v, int m) {
    int pos = 0;
    //Inv: 0 <= pos < i , i v[pos] >= v[j] per a tot j en [0...j-1]
    for (int i = 1; i <= m; ++i) {
        if (v[i] > v[pos]) pos = i;
    }
    return pos;
}

//Pre: 0 <= m < v.size
//Post: v[0...m] conté elements ordenats creixentment
void ordena_per_seleccio(vector<double>& v, int m) {
    if (m > 0) {
        int k = posicio_maxim(v, m);
            intercanvia(v[k], v[m]);
            ordena_per_seleccio(v, m - 1);
    }
}
