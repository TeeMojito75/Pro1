#include <iostream>
#include <vector>
using namespace std;

bool es_obert(char c) {
    if (c == '(' or c == '[') return true;
    return false;
}

bool es_tancat(char c) {
    if (c == ')' or c == ']') return true;
    return false;
}

char match(char c) {
    char c2;
    if (c == ')') return c2 = '(';
    else return c2 = '[';
}

bool brackets() {
    vector<char> no_tancats;
    char c;
    while (cin >> c) {
        if (es_obert(c)) no_tancats.push_back(c);
        else if (no_tancats.size() == 0) return false;
        else if (match(c) != no_tancats[no_tancats.size() - 1]) return false;
        else no_tancats.pop_back();
    }
    return no_tancats.size() == 0;
}

int main() {
    if (brackets()) cout << "si" << endl;
    else cout << "no" << endl;
}
