#include <iostream>
using namespace std;

int main(){
    char x;
    bool a = false;

    while(x != '.'){
        cin >> x;
        if(x == 'a')a=true;
    }
    if(a)cout << "si" << endl;
    else cout << "no" << endl;
}
