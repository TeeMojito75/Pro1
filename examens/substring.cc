#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Parst {
      int index;
      string sub, s;
      vector<int> vap;
};

// Pre: 0 <= k < y.size()
// Post: The result is the first position i>=k where substring x is found in y,
//       or -1 if no such position exists
int substring_from_k (const string& x, int k,  const string& y) {
    int n = x.size(), m = y.size();
    int j = 0, i = k;
    while (i < m and j < n and y[i] == x[j]) {
        ++i;
        ++j;
    }
    if (j == n) return k;
    else return -1;
}

// Pre: x.size()>0 and y.size()>0
// Post: The result is a vector containing all the positions in y where
//       substring x occurs.
vector<int> substrings(const string& x, const string& y) {
    int n = y.size() - x.size() + 1;
    vector<int> pos;
    for (int i = 0; i < n; ++i) {
        int k = substring_from_k(x, i, y);
        if (k != -1) pos.push_back(k);
    }
    return pos;
}

// Comparison function to sort the output as required
bool comp (const Parst& psa, const Parst& psb) {
   if (psa.sub != psb.sub) return psa.sub < psb.sub;
   else return psa.index < psb.index;
}

int main() {
     vector<Parst> vparst;
     Parst pst;
     pst.index = 1;
     while (cin >> pst.sub >> pst.s) {
        pst.vap = substrings(pst.sub,pst.s);
        vparst.push_back(pst);
        ++pst.index;
     }
     sort(vparst.begin(),vparst.end(),comp);
     int vpn = vparst.size();
     for (int i = 0; i < vpn;++i){
        cout << vparst[i].sub << " " << vparst[i].s;
        int n = vparst[i].vap.size();
        for (int j = 0; j < n; ++ j)
            cout << " " << vparst[i].vap[j];
        cout << endl;
    }
 }
