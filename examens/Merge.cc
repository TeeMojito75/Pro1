#include <iostream>
#include <vector>
using namespace std;

void merge(vector<double>& v, int left, int mid, int right) {
    int n = right - left + 1;
    vector<int> aux(n);
    int i = left;
    int j = mid + 1;
    int k = 0;
    while (i <= mid and j <= right) {
        if (v[i] <= v[j]) {
            aux[k] = v[i];
            ++i;
        }
        else {
            aux[k] = v[j];
            ++j;
        }
        ++k;
    }

    while (i <= mid) {
        aux[k] = v[i];
        ++k;
        ++i;
    }

    while (j <= right) {
        aux[k] = v[j];
        ++k;
        ++j;
    }

    for (k = 0; k < n; ++k) v[left + k]  = aux[k];
}

void merge_sort(vector<double>& v, int left, int right) {
    if (left < right) {
        int m = (left + right)/2;
        merge_sort(v, left, m);
        merge_sort(v, m + 1, right);
        merge(v, left, m, right);
    }
}

void ordena_per_fusio(vector<double>& v) {
    merge_sort(v, 0, v.size() - 1);
}
