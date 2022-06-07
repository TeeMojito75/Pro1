#include <iostream>
using namespace std;
//Pre: a > 0 and b > 0
//Post: yes o no depenent si compleix la característica
// 3-sorted

bool is_three_sorted(int a, int b) {
    if (a%3 == 0 and b%3 != 0) return true;
    if (a%3 != 0 and b%3 != 0) return true;
    else if (a%3 != 0 or b%3 != 0) return false;
    else {
        return is_three_sorted(a/3, b/3);
    }
}


int main() {
    int a, b;
    while (cin >> a >> b) {
        if (is_three_sorted(a, b)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
