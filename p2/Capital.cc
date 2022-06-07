#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);

    double c, i, inter = 0.0;
    int t;
    string k;

    cin >> c >> i >> t >> k;
    i = i/100;
    if(k == "simple"){
        inter = (c*i)*t;

        c += inter;

        cout << c << endl;
    }

    else if(k == "compost"){

        for(int j = 1; j <= t; j += 1){
            inter = c*i;
            c += inter;
        }
        cout << c << endl;
    }
}
