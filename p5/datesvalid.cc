#include <iostream>
using namespace std;

bool es_data_valida(int d, int m, int a){
    bool isleap, fail;
    fail = false;

    if ((a%4 == 0 and a%100 != 0) or (a%100 == 0 and (a/100%4)== 0)) isleap = true;
    else isleap = false;

    if ((m==1 or m==3 or m==5 or m==7 or m==8 or m==10 or m==12) and (d > 0 and d <= 31)) fail = true;
    else if (m == 2) {
        if (isleap and (d < 0 or d > 29)) fail = false;
        if (not isleap and (d < 0 or d > 28)) fail = false;
        else fail = true;
    }
    else if (d <= 0 or d > 30 or m > 12 or m < 1) fail = false;
    return fail;
}

int main() {
    int x,y,z;
    cin >> x >> y >> z;

    cout << es_data_valida(x,y,z) << endl;
}
