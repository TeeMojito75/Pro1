#include <iostream>
using namespace std;

int main(){
    int n, i = 2, sen=0, par=0;
    cin >> n;

    while(n > 0){
      if(i%2==0){
          sen += n%10;
          n/=10;
      }
      else if(i%2 !=0){
          par += n%10;
          n /= 10;
    }
    ++i;
    }
    cout << sen << " " << par << endl;

    int mayor, menor;
    mayor = par;
    menor = sen;
    if(sen>mayor){
        int aux = mayor;
        mayor = sen;
        menor = aux;
    }

    if(par == 0)cout << par << " = " << par << " * " << sen << endl;
    else if(sen == 0)cout << sen << " = " << sen << " * " << par << endl;
    else if(mayor%menor==0)cout << mayor << " = " << mayor/menor << " * " << menor << endl;
    else cout << "res" << endl;

}
