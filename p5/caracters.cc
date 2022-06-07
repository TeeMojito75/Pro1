#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) {
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main() {
    char x;
    cin >> x;

    if ('0' <= x and x <= '9'){
        escriu_linia(x, "lletra", false);
        escriu_linia(x, "vocal", false);
        escriu_linia(x, "consonant", false);
        escriu_linia(x, "majuscula", false);
        escriu_linia(x, "minuscula", false);
        escriu_linia(x, "digit", true);
    }
    else if (('A' <= x and x <= 'Z') or ('a' <= x and x <= 'z')){
        escriu_linia(x, "lletra", true);

        if((x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u') or (x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U')){
            escriu_linia(x, "vocal", true);
            escriu_linia(x, "consonant", false);
        }
        else {
            escriu_linia(x, "vocal", false);
            escriu_linia(x, "consonant", true);
        }

       if ('A' <= x and x <= 'Z'){
            escriu_linia(x, "majuscula", true);
            escriu_linia(x, "minuscula", false);
        }
       else {
            escriu_linia(x, "majuscula", false);
            escriu_linia(x, "minuscula", true);
        }
        escriu_linia(x, "digit", false);
    }
    else {
        escriu_linia(x, "lletra", false);
        escriu_linia(x, "vocal", false);
        escriu_linia(x, "consonant", false);
        escriu_linia(x, "majuscula", false);
        escriu_linia(x, "minuscula", false);
        escriu_linia(x, "digit", false);
    }

}
