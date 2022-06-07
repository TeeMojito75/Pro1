#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    char x;
    while (cin >> x) {
        if (x == 'a' or x == 'e') sum += 1;
        else if (x == 'o' or x == 's') sum += 2;
        else if (x == 'd' or x == 'i' or x == 'n' or x == 'r') sum += 3;
        else if (x == 'c' or x == 'l' or x == 't' or x == 'u') sum += 4;
        else if (x == 'm' or x == 'p') sum += 5;
        else if (x == 'k' or x == 'w') sum += 7;
        else sum += 6;
    }
    cout << sum << endl;
}
