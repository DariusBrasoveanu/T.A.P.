#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int>& v) {
    for (int x : v) cout << x << " ";
    cout << "\n";
}

void bubble_sort(vector<int> v) {
    int n = v.size();
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) {
                swap(v[i], v[i + 1]);
                swapped = true;
                print_vector(v);
            }
        }
    }
}

void interschimbare_sort(vector<int> v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
                print_vector(v);
            }
        }
    }
}

int main() {
    vector<int> list = { 5, 7, 3, 26, 8, 2, 1, 6 };

    cout << "Bubble sort:\n";
    bubble_sort(list);

    cout << "\nSortare prin interschimbare:\n";
    interschimbare_sort(list);

    return 0;
}
