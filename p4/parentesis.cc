#include <iostream>
using namespace std;

int main(){
    char x;
    int num = 0;

    while(num>=0 and cin >> x){
        if(x == '(' )++num;
        else --num;

    }
    if(num == 0)cout << "si" << endl;
    else cout << "no" << endl;
}
