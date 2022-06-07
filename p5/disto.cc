#include <iostream>
#include <cmath>
using namespace std;

double dist_or (double x, double y) {
    x = x*x;
    y = y*y;
    double suma = y+x;
    double dist_origen = sqrt(suma);

    return dist_origen;
}

int main() {
    double a,b;
    cin >> a >> b;

    cout << dist_or(a,b) << endl;
}
