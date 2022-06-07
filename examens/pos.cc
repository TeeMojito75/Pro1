#include <iostream>
using namespace std;
//Precondicio: entrada enter n>0 i sequencia acabada en -1
//Poscondicio: dir si existeix un complementari
// a n i la seva posició o no

int main(){
    int n, seq, pos = 0;
    cin >> n;
    bool trobat = false;

    while (seq != -1 and not trobat) {
        pos += 1;
        cin >> seq;
        if ((n+seq)%10 == 0 and seq != -1)trobat = true;

    }
    if (trobat)cout << seq << ": " << pos << endl;
    else if(not trobat) cout << "No existe" << endl;
}
