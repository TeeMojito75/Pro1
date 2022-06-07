#include <iostream>
using namespace std;

int main(){
    int x, y, s, i;
    cin >> x >> y;
    s = 0;
    i = 0;
    if(x > y){
     s = y;
     y = x;
     x = s;
    }


    while(y >= x){
        cout << y << endl;
        y = y-1;
    }
}
