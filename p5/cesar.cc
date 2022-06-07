#include <iostream>
using namespace std;

char codificat(char c, int k) {
        if(c >= 'a' and c <= 'z') {
            return 'A'+(c-'a'+k)%26;
        } else if (c == '_') return ' ';
        else return c;
}

int main() {
    int j;
    while (cin >> j) {
        char x;
        cin >> x;
        while (x != '.') {
            cout << codificat(x, j);
            cin >> x;
        }
        cout << endl;
    }
}
