#include <iostream>
using namespace std;

int main(){

cout.setf(ios::fixed);
cout.precision(10);

int n, m;
    while(cin >> n >> m){
        if(n==m)cout << double(0) << endl;
        else{
        double Hn = 0.0;
        for(double i=m+1;i<=n;++i){
            Hn = Hn+(1/i);
        }
       cout << Hn << endl;
        }
    }
}
