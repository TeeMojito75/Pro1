#include <iostream>
using namespace std;

int main(){
    int n,x, total = 0, aux, aux1;
    cin >> n;
    aux1 = n;
    n = n%1000;
    cout << "nombres que acaben igual que " << aux1 << ":" << endl;

    while(cin >> x){
        aux = x;
        x = x%1000;
        if(n == x){
            total += 1;
            cout << aux << endl;
        }
    }
    cout << "total: " << total << endl;

}
