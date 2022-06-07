#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

void read_rational(int& num, int& den) {
    char barra;
    cin >> num >> barra >> den;
    int a = mcd(num, den);
    num = num/a;
    den = den/a;
}

int main() {
    int num, den;

    read_rational(num,den);
    cout << num << '/' << den << endl;
}
