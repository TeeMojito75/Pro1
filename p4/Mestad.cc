#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);

    int n;
    cin >> n;
    for (int i = 0;i < n;++i) {
        int m;
        double x, major, menor, mitjana = 0;
        bool first = true;
        cin >> m;
        for (int j = 0; j<m;++j) {
            if(first){
                cin >> major;
                mitjana += major;
                menor = major;
            }
            else{
                cin >> x;
                mitjana += x;

                if(x > major)major = x;
                if(menor > x)menor = x;

                if(menor > major){
                    int aux = menor;
                    menor = major;
                    major = aux;
                }
            } first = false;

        }cout << menor << ' ' << major << ' ' << mitjana/m << endl;
    }
}
