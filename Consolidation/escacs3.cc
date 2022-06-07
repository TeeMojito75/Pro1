#include <iostream>
using namespace std;

int main(){
    int n, total = 0;
    char x;

    cin >> n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin >> x;
            if(i == j)total += x-'0'; //Diagonal exterior
            else if(i == n-(j+1)) total += x-'0'; //Diagonal interior
            }
        }cout << total << endl;
    }
