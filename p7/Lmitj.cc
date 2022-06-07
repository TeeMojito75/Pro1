#include <iostream>
#include <vector>
using namespace std;

const int LONG_ALFABET = 'z' - 'a' + 1;

char lletra_mes_frequent(const string& s) {
   vector<int> mes_freq(LONG_ALFABET,0);
   for (int i = 0; i < s.size(); ++i) {
       ++mes_freq[s[i] - 'a'];
    }
    int max = 0;
    for (int i = 0; i < mes_freq.size(); ++i) {
        if (mes_freq[i] > mes_freq[max]) max = i;
    }
    return char(max + 'a');
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    double num_char = 0;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

//  Calcul de mijtana de caracters
    for (int j = 0; j < n; ++j) num_char += v[j].size();
    num_char = num_char/double(n);
    cout << num_char << endl;

    for (int r = 0; r < n; ++r) {
        if (v[r].size() >= num_char) cout << v[r] << ": " << lletra_mes_frequent(v[r]) << endl;
    }
}
