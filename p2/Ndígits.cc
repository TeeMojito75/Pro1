#include <iostream>
using namespace std;

int main(){
   int x, y, n;
   cin >> x;
   n=x;

   if (x == 0)y = 1;
   else y = 0;

   while(n != 0){
     n = n / 10;
     y = y + 1;
   }
   cout << "El nombre de digits de " << x << " es " << y << '.' << endl;
}
