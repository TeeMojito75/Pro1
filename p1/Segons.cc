#include <iostream>
using namespace std;

int main(){
   int a, d, h, m, s, t;
    cin >> a >> d >> h >> m >> s;

    t = (a*(60*60*24*365) )+(d*(60*60*24))+(h*3600)+(m*60)+s;
    cout << t << endl;
}
