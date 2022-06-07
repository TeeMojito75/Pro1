#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y){
    int i, k, n;
    i = k = n = 0;
    while (i < X.size() and k < Y.size()) {
        if (X[i] < Y[k]) i = i + 1;
        else if (X[i] > Y[k]) k = k + 1;
        else {
            i = i + 1;
            k = k + 1;
            n = n + 1;
        }
    }
    return n;
}

int main() {
    int n1, n2;

        cin >> n1;
        vector<int> v1(n1);
        for (int i = 0; i < n1; i++)  cin >> v1[i];
        cin >> n2;
        vector<int> v2(n2);
        for (int j = 0; j < n2; j++)  cin >> v2[j];

        cout << elements_comuns(v1, v2) << endl;
}

