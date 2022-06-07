#include <iostream>
#include <vector>
using namespace std;

struct Game {
    string home;           // home team
    int shome;             // home team's score
    string visitor;        // visitor team
    int svisitor;        // visitor team's score
};

int scoring_ability(const vector<Game>& v, const string& team) {
     int punts_visit = 0;
     int punts_casa = 0;
     for (int i = 0; i < v.size(); ++i) {
         if (team == v[i].home or team == v[i].visitor) {
             if (team == v[i].home) punts_casa += v[i].shome;
             if (team == v[i].visitor) punts_visit += v[i].svisitor;
        }
    }
    return punts_casa - punts_visit;
}

// Pre: n is a natural; the input has available the information of n games
// Post: returns a vector with n correctly initialized games
vector<Game> read_games(int n) {
    vector<Game> partits(n);
    for (int i = 0; i < partits.size(); ++i) {
        cin >> partits[i].home >> partits[i].shome >> partits[i].visitor >> partits[i].svisitor;
    }
    return partits;
}

int main() {
    int n;
    cin >> n;
    vector<Game> llista_partits(n);
    llista_partits = read_games(n);
    vector<string> equips;
    string s;
    while (cin >> s) {
        equips.push_back(s);
    }

    for (int i = 0; i < equips.size(); ++i) {
        cout << equips[i] << ' ' << scoring_ability(llista_partits, equips[i]) << endl;
    }

}
