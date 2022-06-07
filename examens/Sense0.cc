#include <iostream>
using namespace std;

//Pre: x > 0
//Post: retorna el valor que resulta d'eliminar a x els seus digits
// igual a 0
int elimina_zeros(int x) {
    if (x < 10) return x;
    else {
        int d = x%10;
        if (d != 0) return elimina_zeros(x/10)*10 + d;
        else return elimina_zeros(x/10);
    }
}

int main() {
    int x;
    while (cin >> x) {
        cout << elimina_zeros(x) << endl;
    }
}
