#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;
    while (cin >> a >> op >> b and a != -1 ) {
        if (op == '+') cout << a+b << endl;
        if (op == '-') cout << a-b << endl;
        if (op == '*') cout << a*b << endl;
    }
}
