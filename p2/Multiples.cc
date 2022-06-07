#include <iostream>
using namespace std;

int main(){
    int n, x, m = 0;
    cin >> n;

    while(cin >> x){
        if((x%n) == 0)++m;
    }
    cout << m << endl;
}
