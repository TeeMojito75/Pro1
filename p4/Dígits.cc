#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool end = false;
    bool first = true;
    bool lose = false;
    int dig_central;
    int i = 1;
    while (i <= 2*n and not end) {
        int a;
        cin >> a;

        int temp = a;
        int digits = 1;
        while (temp > 9) {
            temp = temp/10;
            ++digits;
        }
        for (int j = 1; j <= digits/2; ++j) a = a/10;
        if (digits%2 == 0) {
            end = true;
            lose = true;
        }
        else if (first) {
            dig_central = a%10;
            first = false;
            ++i;
        }
        else {
            if (a%10 != dig_central) {
                end = true;
                lose = true;
            }
            else ++i;
        }
    }
    if (not lose) cout << '=' << endl;
    else if (i%2 == 0) cout << 'A' << endl;
    else cout << 'B' << endl;
}
