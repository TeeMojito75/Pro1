#include <iostream>
using namespace std;

//Precondició: entrada enter n > 0
//Postcondició: dibuix de la lletra v d¡altura n
int main(){
    int n;
    cin >> n;
    int extrem1 = 2*n - 1;
    int extrem2 = 1;

    for (int i = 1; i <= n; ++i) {  //dibuix de files
        for (int j = 1; j <= extrem1; ++j) {  //dibuix de columnes
            if (j != extrem1 and j != extrem2)cout << " ";
            else cout << 'V';
        }

        cout << endl;
        extrem1 -= 1;
        extrem2 += 1;
    }
}
