#include <iostream>
using namespace std;

int main(){
    int a,b,aux;

    while(cin >> a and cin >> b){
        aux = a;
        int suma = 0;
        for(int i = a; i<=b;++i){
            suma = suma + ((aux*aux)*aux);
            aux += 1;
        }
        cout << "suma dels cubs entre " << a << " i " << b << ":" << " " << suma << endl;
    }
}
