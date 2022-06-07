#include <iostream>
using namespace std;

int main(){
    int x=0,y=0;
    char m;

    while(cin >> m){
        if(m=='s')y += 1;
        if(m=='e')x += 1;
        if(m=='n')y -= 1;
        if(m=='o')x -= 1;
    }
    cout << '(' << x << ", " << y << ')' << endl;
}
