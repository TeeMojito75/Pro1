#include <iostream>
using namespace std;

int main(){
    int n, total=0;
    char c, c1, c2;
    cin >> n >> c1 >> c2;

    for(int i = 1;i<=n;++i){
        cin >> c;
        if(c >= c1 and c <= c2)total += 1;
    }
    cout << total << endl;
}
