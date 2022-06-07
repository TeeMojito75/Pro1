#include <iostream>
using namespace std;

int main(){
    int n, t, d, a, s = 0;
    cin >> d >> n >> t;

    for(int i = 0; i<t;++i){
       cin >> a;
       n += a-d;
       if(n>0) s = s+1;
    }
    cout << s << endl;
}
