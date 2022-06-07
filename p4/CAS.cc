#include <iostream>
using namespace std;

int main(){
    char x;
    int as=0;

    while(x != '.'){
        cin >> x;
        if(x == 'a')as += 1;
    }
    cout << as << endl;
}
