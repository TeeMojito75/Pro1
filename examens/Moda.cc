#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Words {
    string word;
    int num;
};

bool cmp(const Words& a, const Words& b) {
    if (a.num != b.num) return a.num > b.num;
    else return a.word > b.word;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        Words last;
        vector<string> words(n);
        vector<Words> orderedWords;

        for (int i = 0; i < n; ++i) cin >> words[i];
        sort(words.begin(), words.end());

        last.word = words[0];
        last.num = 1;

        for (int i = 1; i < n; ++i) {
            if (last.word != words[i]) {
                orderedWords.push_back(last);
                last.word = words[i];
                last.num = 1;
            }
            else ++last.num;
        }
        orderedWords.push_back(last);
        sort(orderedWords.begin(), orderedWords.end(), cmp);
        cout << orderedWords[0].word << endl;
        cin >> n;
    }
}
