#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n){
        int p = n;
        int m = n;
        for(int i=1;i<=(n-1);++i){
          for(int i=1;i<=(m-1);++i ){cout << " "; }
          m=m-1;
           for(int l=1;l<=p;++l){ cout << 'X';}
             cout << endl;
             p = p+2;
        }
        for(int j=1;j<=n;++j){
         for(int m=1;m<=((3*n)-2);++m){cout << 'X';}
         cout << endl;
        }
        p=p-2;
        m=m+1;
        for(int k=1;k<=(n-1);++k){
         for(int k=1;k<=(m-1);++k){ cout << " ";}
         m= m+1;
          for(int x=1;x<=p;++x){ cout << 'X';}
          p = p-2;
          cout << endl;
        }
        cout << endl;
    }
}
