#include <iostream>
using namespace std;

bool primo(int n) {
   if (n <= 1) return false;
   for (int i = 2; i*i <= n;++i) {
       if (n%i == 0) return false;
    }
    return true;
}

int seg_primo(int s) {
    bool seguent = false;
    if (primo(s)){
        while (not seguent) {
            ++s;
            if (primo(s)) seguent = true;
            else seguent = false;
        }
    }
    return s;

}

int main() {
    int x;

    while (cin >> x) {
        if (primo(x)) cout << seg_primo(x) << endl;
    }
}
