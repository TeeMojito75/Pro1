#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int right;
    int wrong;
};

vector<int> read_right_answer(int m) {
    vector<int> vect(m);
    for (int i = 0; i < m; ++i) cin >> vect[i];
    return vect;
}

vector<Student> get_info_test(const vector<int>& v, int n) {
    vector<Student> s(n);
    int m = v.size();
    for (int i = 0; i < n; ++i) {
        cin >> s[i].name;
        s[i].right = s[i].wrong = 0;
        for (int j = 0; j < m; ++j) {
            int elem;
            cin >> elem;
            if (elem == v[j]) ++s[i].right;
            else if (elem != 0) ++s[i].wrong;
        }
    }
    return s;
}

bool cmp(const Student& a, Student& b) {
    int nota1 = 2*a.right - a.wrong;
    int nota2 = 2*b.right - b.wrong;

    if (nota1 != nota2) return nota1 > nota2;
    if (a.wrong != b.wrong) return a.wrong < b.wrong;
    return a.name < b.name;
}

void write_results(const vector<Student>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        cout << v[i].name << ' ' << v[i].right << ' ' << v[i].wrong;
        cout << endl;
    }
}


int main() {
    int m;
    cin >> m;
    vector<int> answer = read_right_answer(m);
    int n;
    cin >> n;
    vector<Student> v = get_info_test(answer, n);
    sort(v.begin(), v.end(), cmp);
    write_results(v);
}
