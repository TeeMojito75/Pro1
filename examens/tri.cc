#include <iostream>
using namespace std;

//Precondició; entrada enter n > 1
//Postcondició; dibuix des contorn d'un triangle d'alçada n
int main(){
    int n, tan, costat;
    cin >> n;
    tan = 1;
    costat = n;
    bool fila1 = true;

    for(int i=1;i<=n;++i){ //Bucle per files
        for(int j=1;j<=n;++j){ //Bucle per columnes
            if(fila1)cout << '*';
            if(not fila1){
                if(j == tan or j==costat)cout << '*';
                else cout << " ";
            }
        }
       cout << endl;
       tan += 1;
       fila1 = false;
    }
}
