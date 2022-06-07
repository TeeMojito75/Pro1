#include <iostream>
#include <vector>
using namespace std;

string sortida(int p, vector<int>& v) {
    if (v[p] == 0) return "mai";
    int nueva_pos = p + v[p];
    v[p] = 0;
    if (nueva_pos < 0) return "esquerra";
    if (nueva_pos >= v.size()) return "dreta";
    return sortida(nueva_pos, v);
}
