#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Word {
    string word;
    int freq;
};

bool comp(const Word& a, Word& b) {
    if (a.freq == b.freq) return a.word < b.word;
    else return a.freq > b.freq;
}

int main() {
    int n, k;

    while (cin >> n >> k) {
        vector<string> paraules(n);
        vector<Word> paraules_ordenades(n);

        for (int i = 0; i < n; ++i) cin >> paraules[i];
        sort(paraules.begin(), paraules.end()); //ordenació del vector

        Word actual;
        actual.word = paraules[0];
        actual.freq = 1;

        for (int i = 1; i < n; ++i) {
             if (actual.word != paraules[i]) {
                paraules_ordenades.push_back(actual);

                actual.word = paraules[i];
                actual.freq = 1;
             }
             else {
                 ++actual.freq;
            }
        }
        paraules_ordenades.push_back(actual);
        sort(paraules_ordenades.begin(), paraules_ordenades.end(), comp);

        int c = 0;
        while (k != 0) {
            cout << paraules_ordenades[c].word << endl;
            --k;
            ++c;
        }
        cout << "----------" << endl;

    }
}
