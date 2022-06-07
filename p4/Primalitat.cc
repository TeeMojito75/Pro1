#include <iostream>
using namespace std;

int main(){
    int n;
     cin >> n;

    for(int j = 1;j<=n;++j){
        int xi;
        cin >> xi;
        bool primo;
        if((xi==1) or (xi==0)) primo = false;
        else{
            int i = 2;
            primo = true;
            while(i*i <= xi and primo){
                if(xi%i == 0)primo = false;
                else i += 1;
            }
        }
        if(primo)cout << xi << " es primer" << endl;
        else cout << xi << " no es primer" << endl;
    }
}
