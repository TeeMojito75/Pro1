#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin>>n){
        int pases = 0;
        while(n != 1){
            if(n%2==0){
               n /= 2;
            }
            else if(n%2!=0){
                n = n*3 + 1;
            }
            pases += 1;
        }
        cout << pases << endl;
    }
}
