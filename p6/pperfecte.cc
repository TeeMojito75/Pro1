#include <iostream>
using namespace std;

bool es_primer(int n) {
    int d = 2;
    while (d*d <= n) {
        if (n%d == 0) return false;
        ++d;
    }
    if(n <= 1) return false;
    else return true;
}

int suma(int s) {
    if (s < 10) return s;
    else return s%10 + suma(s/10);
}

bool es_primer_perfecte(int x) {
    if (x < 10){
        if (es_primer(x)) return true;
        else return false;
    }
    else {
        if (not es_primer(x))return false;
        else return es_primer_perfecte(suma(x));

    }
}


int main() {
    int r;
    cin >> r;
    cout << es_primer_perfecte(r) << endl;
}
