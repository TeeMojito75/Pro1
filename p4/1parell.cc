#include <iostream>
using namespace std;

int main(){
    int n, pos=0;
    bool found = false;

    while(not found and cin >> n){
        if(n%2==0)found = true;
        pos += 1;
    }
    cout << pos << endl;
}
