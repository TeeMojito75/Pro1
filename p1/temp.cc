#include <iostream>
using namespace std;


int main(){
    double temp;
    cin >> temp;

    if(temp <=0){ cout << "fa fred" << endl;
    cout << "l'aigua es gelaria" << endl;
    }
    else if (temp > 0 and temp < 10){
        cout << "fa fred" << endl;
    }
    else if (temp >= 10 and temp <= 30){
        cout <<"s'esta be" << endl;
    }
    else if (temp > 30 and temp < 100){
        cout << "fa calor" << endl;
    }
    else{ cout << "fa calor" << endl;
    cout << "l'aigua bulliria" << endl;
    }
}
