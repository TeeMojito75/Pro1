#include <iostream>
using namespace std;

int main(){
    int n, num, r = 0;
    cin >> n;
    num = n;

    while(n != 0){
        r += n%10;
        n /= 100;
    }

    string b;
    if(r%2 == 0)b = "";
    else b = " NO";
    cout << num << b << " ES TXATXI" << endl;
}
