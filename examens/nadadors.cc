#include <iostream>
#include <vector>

using namespace std;

struct Swimmer {
    string name;
    string country;
    string style;
    double time;
};

typedef vector<Swimmer> Competition;

void read_data(Competition& v) {
    int c = v.size();
    for (int i = 0; i < c; ++i) {
        cin >> v[i].name >> v[i].country;
        cin >> v[i].style >> v[i].time;
    }
}

int winner(const Competition& v, string style) {
    int m = v.size();
    int best_time, pos = -1;
    bool first = true;
    for (int i = 0; i < m; ++i) {
        if (v[i].style == style) {
            if (first) {
                best_time = v[i].time;
                pos = i;
                first = false;
            }
            else {
                if (v[i].time < best_time) {
                    best_time = v[i].time;
                    pos = i;
                }
            }
        }
    }
    return pos;
}

int main() {
    int n;
    cin >> n;
    Competition c(n);
    read_data(c);

    string style;
    while (cin >> style) {
        int pos = winner(c, style);
        if (pos != -1){
            cout << "Winner " << style << ": " << c[pos].name;
            cout << ' ' << c[pos].country << ' ' << c[pos].time << endl;
        }
        else cout << "Style " << style << " has not been run" << endl;
    }
}
