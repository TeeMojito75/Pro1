#include <iostream>
using namespace std;

struct Temps {
    int hora, minut, segon;
};

void un_segon(const Temps& t, Temps& t1, Temps& t2) {
    t1.minut = t2.minut = t.minut;
    t1.hora = t2.hora = t.hora;
    t1.segon = t2.segon = t.segon;

    t1.segon += 1;
    t2.segon -= 1;//Suma i resta del segon respectivament

    if (t1.segon >= 60) {
        t1.minut = t.minut+1;
        t1.segon %= 60;
    }
    if (t1.minut >= 60) {
        t1.hora = t.hora+1;
        t1.minut %= 60;
        if (t1.hora >= 24) t1.hora %= 24;
    }

    if (t2.segon < 0) {
        t2.minut = t.minut-1;
        t2.segon = 59;
    }
    if (t2.minut < 0) {
        t2.hora = t.hora-1;
        t2.minut = 59;
        if (t2.hora < 0) t2.hora = 23;
    }
}

int main() {
    Temps t, t1, t2;
    while (cin >> t.hora >> t.minut >> t.segon) {
    un_segon(t,t1,t2);
    cout << t1.hora << ' ' << t1.minut << ' ' << t1.segon << endl;
    cout << t2.hora << ' ' << t2.minut << ' ' << t2.segon << endl;
    }
}
