#include <iostream>
using namespace std;

int main(){
    int c,f,t=0;
    cin >> c >> f;
    char x;

    for(int i=1;i<=f;++i){
        for(int j=1;j<=c;++j){
            cin >> x;
            t = t+(x-'0');
        }
    }
    cout << t << endl;
}
