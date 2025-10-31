#include <iostream>
using namespace std;

void count_sort(int arr[], int n) {
    int k = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > k)
            k = arr[i];
    }

    int index = 0;
    for (int num = 0; num <= k; num++) {
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == num)
                count++;
        }

        for (int c = 0; c < count; c++) {
            arr[index++] = num;
        }
    }
}

int main() {
    int arr[] = { 1, 3, 7, 0, 1, 1, 6, 3, 0, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    count_sort(arr, n);

    cout << "Array sortat: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}