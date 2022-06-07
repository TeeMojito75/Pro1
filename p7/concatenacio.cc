#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenacio(const vector<int>& v1, const vector<int>& v2) {
    int n1 = v1.size();
    int n2 = v2.size();
    vector<int> res(n1 + n2);
    for (int i = 0; i < n1; ++i) res[i] = v1[i] ;
    for (int i = 0; i < n2; ++i) res[n1 + i] = v2[i];
    return res;
}

int main() {
   int n1, n2;

        cin >> n1;
        vector<int> v1(n1);
        for (int i = 0; i < n1; i++)  cin >> v1[i];
        cin >> n2;
        vector<int> v2(n2);
        for (int j = 0; j < n2; j++)  cin >> v2[j];

        vector<int> res = concatenacio(v1, v2);
        for (int i = 0; i < res.size(); ++i) cout << res[i] << endl;
}
