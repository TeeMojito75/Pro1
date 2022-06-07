#include <iostream>
using namespace std;

bool es_letra(char c) {
    return ('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z');
}

void signos_letras() {
    char x;
    if (cin >> x) {
        if (not es_letra(x)) cout << x;
            signos_letras();
        if (es_letra(x)) cout << x;
        }
    }

int main() {
    signos_letras();
    cout << endl;
}
