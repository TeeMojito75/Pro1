#include <iostream>
#include <vector>
using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;

void read_data(Forest& v) {
    int n;
    cin >> n;
    v = Forest(n);
        for (int i = 0; i < n; ++i) {
             cin >> v[i].name >> v[i].color >> v[i].poison;
             cin >> v[i].burns >> v[i].height;
        }
    }

int count(const Forest& v, string name, string color,
          string poison, string burns, double height) {
    int total = 0;
    int m = v.size();
    for (int i = 0; i < m; ++i) {
        bool correct = true;
        if (name != "*" and v[i].name != name) correct = false;
        if (correct and color != "*" and v[i].color != color) correct = false;
        if (correct and poison != "*" and v[i].poison != poison) correct = false;
        if (correct and burns != "*" and v[i].burns != burns) correct = false;
        if (correct and v[i].height < height) correct = false;
        if (correct) ++total;
    }
    return total;
}

int main() {
    Forest v;
    read_data(v);

    string n;
    while (cin >> n) {
        string c, p, b;
        double h;
        cin >> c >> p >> b >> h;
        int total = count(v, n, c, p, b, h);
        cout << total << endl;
    }
}
