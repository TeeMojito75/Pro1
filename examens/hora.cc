#include <iostream>
using namespace std;

int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    int d;
    cin >> d;
    int r = m + d;
    while(r >= 60){
        h += 1;
        r -= 60;
    }
    while(h >= 24) h -= 24;
    if(h<10)cout << '0' << h << ":";
    else cout << h << ":";
    if(r < 10)cout << '0' << r << endl;
    else cout << r << endl;
}
