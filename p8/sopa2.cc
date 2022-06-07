#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <char>> Sopa_Lletres;
typedef vector <vector <int>> Sopa_Punts;

Sopa_Lletres llegeix_lletres(int f, int c) {
	Sopa_Lletres s(f, vector <char> (c));
	for (int i = 0; i < s.size(); ++i) for (int j = 0; j < s[0].size(); ++j) cin >> s[i][j];
	return s;
}
Sopa_Punts llegeix_punts(int f, int c) {
	Sopa_Punts s(f, vector <int> (c));
	for (int i = 0; i < s.size(); ++i) for (int j = 0; j < s[0].size(); ++j) cin >> s[i][j];
	return s;
}
//Pre: (x,y) = (1,0) o (x,y) = (0,1) and i < s.size() and j < s[0].size()
//Post: Retorna true si es troba la paraula a s partint desde s[i][j] en direccio (x,y) i false si no
bool esta(const Sopa_Lletres& s, string par, int i, int j, const int x, const int y) {
	for (int k = 0; k < par.size(); ++k) {
		if (i >= s.size() or j >= s[0].size()) return false;
		if (par[k] == s[i][j]) {
			i += x;
			j += y;
		}
		else return false;
	}
	return true;
}

//Pre: (x,y) = (1,0) o (x,y) = (0,1) and i < s.size() and j < s[0].size()
//Post: retorna el nombre de punts que es pot aconseguir amb la paraula par partint desde p[i][j] en direccio (x,y)
int punts(const Sopa_Punts& p, string par, int i, int j, const int x, const int y) {
	int res = 0;
	for (int k = 0; k < par.size(); ++k) {
		res += p[i][j];
		i += x;
		j += y;
	}
	return res;
}
//Pre: cap
//Post: retorn el maxim de a i b
int maxim(int a, int b) {
	if (a > b) return a;
	else return b;
}
int main() {
	int f, c;
	while (cin >> f >> c) {
		Sopa_Lletres taulell_lletres = llegeix_lletres(f, c);
		Sopa_Punts taulell_punts = llegeix_punts(f, c);

		int t;
		cin >> t;
		for (int k = 1; k <= t; ++k) {
			string paraula;
			cin >> paraula;
			bool existeix = false;
			int max = 0;
			for (int i = 0; i < taulell_lletres.size(); ++i) {
				for (int j = 0; j < taulell_lletres[0].size(); ++j) {
					if (esta(taulell_lletres, paraula, i, j, 1, 0)) {
						existeix = true;
						max = maxim(max, punts(taulell_punts, paraula, i, j, 1, 0));
					}
					if (esta(taulell_lletres, paraula, i, j, 0, 1)) {
						existeix = true;
						max = maxim(max, punts(taulell_punts, paraula, i, j, 0, 1));
					}
				}
			}
			if (existeix) cout << max << endl;
			else cout << "no" << endl;
		}
	}
}
