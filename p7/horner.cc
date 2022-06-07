#include <iostream>
#include <vector>
using namespace std;

int avalua(const vector<int>& p, int x) {
    int ava = 0;
    int marcador = p.size() - 1;

    for (int i = marcador; i >= 0; --i) {
        ava = ava*x + p[i];
    }
    return ava;
}

// int main(){

// }
