#include <iostream>
using namespace std;

bool es_any_de_traspas(int any) {
    if((any%4==0 and any%100 !=0) or (any%100==0 and (any/100%4)==0)){
        return true;
    }
    else return false;
}

int main() {
    int n;
    cin >> n;

    cout << es_any_de_traspas(n) << endl;
}
