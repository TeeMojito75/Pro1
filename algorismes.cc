#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Selection Sort
void swap(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

int minim(const vector<int>& v, int from) {
    int p = from;
    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < v[p]) p = i;
    }
    return p;
}

void selection_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        int pos_min = minim(v, i);
        swap(v[i], v[pos_min]);
    }
}

//Insertion Sort
void insertion_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        int x = v[i];
        int j = i;
        while (j > 0 and v[j - 1] > x) {
            v[j] = v[j - 1];
            --j;
        }
        v[j] = x;
    }
}

//Bubble Sort
void intercanvi(int& a, int& b) {
    int aux = a;
    a = b;
    b = aux;
}

void bubble_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n - 1; j > i; --j) {
            if (v[j - 1] > v[j]) intercanvi(v[j], v[j - 1]);
        }
    }
}


//Merge Sort
void fusion(vector<int>& v, int esq, int m, int dre) {
    int n = dre - esq + 1;
    vector<int> aux(n);
    int k = 0;
    int i = esq;
    int j = m + 1;
    while (i <= m and j <= dre) {
        if (v[i] < v[j]) {aux[k] = v[i]; ++i;}
        else {aux[k] = v[j]; ++j;}
        ++k;
    }
    while (i <= m) {aux[k] = v[i]; ++i; ++k}
    while (j <= dre) {aux[k] = v[j]; ++j; ++k}
    for (k = 0; k < n; ++k) v[esq + k] = aux[k];
}

void merge_sort(vector<int>& v, int esq, int dre) {
    if (esq < dre) {
        int m = (esq + dre)/2;
        merge_sort(v, esq, m);
        merge_sort(v, m + 1, dre);
        fusion(v, esq, m, dre);
    }
}

//Cerca dicotòmica
int cerca(const vector<int>& v, int x, int izq, int dcha) {
    if (izq > dcha) return -1;
    int m = (dcha - izq)/2;
    if (v[m] < x) return cerca(v, x, m + 1, dcha);
    else if (v[m] > x) return cerca(v, x, izq, m - 1);
    else return m;
}

//Garbell d'Eratostenes
vector<bool> criba(int m) {
    vector<bool> v(m + 1, true);
    v[0] = v[1] = false;
    for (int i = 2; i*i <= m; ++i) {
        if (v[i]) {
            for (int j = i*i; j <= m; ++j) v[j] = false;
        }
    }
    return v;
}
