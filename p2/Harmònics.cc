#include <iostream>
using namespace std;

int main(){

cout.setf(ios::fixed);
cout.precision(4);

int n;
    cin >> n;
    double t = 0;
    double i = 1;
    while(i<=n){
        t = t+(1/i);
        i = i+1;
    }
    cout << t << endl;
}
