#include <iostream>
using namespace std;

void canvis_base(int n, int b) {
    if (n < b){
        if (b != 16) cout << n;
        else if (n%b > 9) cout << char('A' + (n%b - 10));
        else cout << n%b;
    }
    else {
        canvis_base(n/b,b);
        if (b != 16) cout << n%b;
        else if (n%b > 9) cout << char('A' + (n%b - 10));
        else cout << n%b;
    }
}



int main() {
    int x;
    while (cin >> x){
    cout << x << " = ";
    canvis_base(x,2);
    cout << ", ";
    canvis_base(x,8);
    cout << ", ";
    canvis_base(x,16);
    cout << endl;
}
