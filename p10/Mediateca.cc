#include <iostream>
#include <algortihm>
#include <vector>
using namespace std;

struct Track {
    string artist, title, genre;
    int year;
};

bool comp(const Track& a, const Track& b) {

}

vector<Track> read_tracks(int n) {

}

void print_track(const Track& t) {
    cout << t.artist;
    cout << " (" << t.year;
    cout << ") " << t.title << " (" << t.genre << ")" << endl;
}

int main() {

}
