#include <iostream>
using namespace std;

void info_secuencia(int& suma, int& ultim) {
    int n = 1;
    while (cin >> n and n != 0) {
        suma += n;
        ultim = n;
    }
}

int main() {
    int x, seq1, seq2;

    while (cin >> seq1 and seq1 != 0) {
        info_secuencia(seq1);
        while (cin >> x and x != 0) {
        }
    }
}
