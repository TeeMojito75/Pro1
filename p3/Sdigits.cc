#include <iostream>
using namespace std;

int main(){
    int n,x, aux1, suma = 0;
     while(cin >> n){
         aux1 = n;
         x = n;
         while(n!=0){
           aux1 = n%10;
           n /= 10;
           suma = suma+aux1;
          }
          cout << "La suma dels digits de " << x << " es " << suma << "." << endl;
          suma = 0;
         }
    }
