#include <iostream>
using namespace std;

int main(){
    int n,x, pos = 0;
    cin >> n;
    bool trobat = false;

    while(not trobat and cin >> x){
        pos += 1;
        if(pos == n){
            trobat = true;
        }
    }
    cout << "A la posicio " << n << " hi ha un " << x << '.'<< endl;
}
