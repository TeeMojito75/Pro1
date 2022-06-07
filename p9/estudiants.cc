#include <iostream>
#include <vector>
using namespace std;

struct Estudiant {
    int dni;
    string nom;
    double nota; // La nota és un valor entre 0 i 10, o -1 que vol dir NP
    bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj) {
    min = 10;
    max = 0;
    mitj = 0;
    int n = 0;
    int s = es.size();

    for (int i = 0; i < s; ++i) {
        if (es[i].nota != -1 and not es[i].repetidor) {
            if (es[i].nota > max) max = es[i].nota;
            if (es[i].nota < min) min = es[i].nota;
            ++n;
            mitj += es[i].nota;
        }
    }

    if (n > 0) mitj = mitj/(double)n;
    else {
        min = max = mitj = -1;
    }
}
