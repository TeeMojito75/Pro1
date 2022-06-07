#include <iostream>
using namespace std;

int main(){
    int n, i, t;
    cin >> n;
    i = 1;
    t = 0;

    while(n>=1){
        t = t+(i*i);
        i = i+1;
        n = n-1;
    }
    cout << t << endl;

}
