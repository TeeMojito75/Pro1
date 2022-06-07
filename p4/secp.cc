#include <iostream>
using namespace std;

int main(){
    string paraula1;
    string paraula2;
    int mas_largo = 1, lon=1;

    cin >> paraula1;
    while(cin >> paraula2){
      if(paraula2==paraula1)++lon;
      else lon = 0;
      if(lon>mas_largo)mas_largo=lon;
    }
    cout << mas_largo << endl;
}
