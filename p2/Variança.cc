#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    double x, v, c, suma1 = 0.0, suma2 = 0.0;
    c = n;
    for(int i = 1; i<=n; ++i){
        cin >> x;
        suma1 += (x*x);
        suma2 +=  x;
    }
    suma1 = suma1*(1/(c-1));
    suma2 = (suma2*suma2)*(1/(c*(c-1)));
    v = suma1 - suma2;
    cout << v << endl;
}
