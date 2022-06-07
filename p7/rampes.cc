#include <iostream>
#include <vector>
using namespace std;

vector<bool> pos_rampas(const vector<int>& V) {
    vector<bool> rampes(V.size());
    for (int i = 2; i < V.size(); ++i) {
        if ((V[i-2] < V[i-1] and V[i-1] < V[i])or (V[i-2] > V[i-1] and V[i-1] > V[i])) rampes[i-2] = true;
        else rampes[i-2] = false;
    }
    return rampes;
}

int pot_conflictives (const vector<bool>& B) {
    int pos_confl = 0;
    for (int j = 0; j < B.size()-2; ++j) {
        if (B[j] and B[j+1]) ++pos_confl;
        if (B[j] and B[j+2]) ++pos_confl;
    }
    return pos_confl;
}

int main() {
    int n;
    while (cin >> n){
        vector<int> vect(n);
        for (int i = 0; i < n; ++i) cin >> vect[i];
        vector<bool> pos = pos_rampas(vect);

        int posicions = pot_conflictives(pos);
        cout << "posicions amb rampa:";
        for (int i = 0; i < n; ++i) {
        if (pos[i]) cout << ' ' << i;
        }
        cout << endl;
        cout << "potencialment conflictives: " << posicions << endl;
        cout << "---" << endl;
    }
}
