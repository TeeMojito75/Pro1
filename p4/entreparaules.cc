#include <iostream>
using namespace std;

int main(){

    string n;
    bool first = false;
    bool final = false;
    bool cert = true;
    int cont = 0;

    while(cin >> n and not final and cert){
        if(n == "principi")first = true;
        else if(n == "final" and first)final = true;
        else if(n == "final" and not first)cert = false;
        else{
            if(first)++cont;
        }
    }
    if(final)cout << cont << endl;
    else cout << "sequencia incorrecta" << endl;
}
