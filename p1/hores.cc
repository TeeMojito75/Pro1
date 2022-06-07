#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
   int h = N / 3600;
   int m = (N % 3600)/60;
   int s = N % 60;
    cout << h << "hores, " << m << "minuts, " << s << "segons, " << endl;
}
