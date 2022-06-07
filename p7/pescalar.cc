#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double producte = 0;

    for (int i = 0; i < u.size(); ++i) {
        producte = producte + v[i]*u[i];
    }
    return producte;
}
