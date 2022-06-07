#include <iostream>
using namespace std;

//Precondició: entrada enter n>0 i
//Sequencia = n d'un char i double per linia

//Postcondició: extreure el valor del double convertit
//a l'altre escala de temperatura

int main(){
    cout.setf(ios::fixed);
    cout.precision(1);
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        char c;
        double v;
        cin >> c >> v;
        double temp = v;

        if (c == 'C') cout << "F " << 1.8*temp + 32 << endl;
        else cout << "C " << (temp-32)/1.8 << endl;
    }
}
