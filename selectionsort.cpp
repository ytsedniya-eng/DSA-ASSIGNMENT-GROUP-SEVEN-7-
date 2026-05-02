#include <iostream>
using namespace std;

// selection sort
void selectionSort(int dataelement[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        // find the smallest element
        for (int j = i + 1; j < n; j++) {
            if (dataelement[j] < dataelement[minIndex]) {
                minIndex = j;
            }
        }

        // swap the smallest element with current position
        if (minIndex != i) {
            swap(dataelement[i], dataelement[minIndex]);
        }
    }
}

int main() {
    int dataelement[5] = {9, 3, 7, 1, 6};
    int n = 5;

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++) {
        cout << dataelement[i] << " ";
    }

    selectionSort(dataelement, n);

    cout << "\nAfter Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << dataelement[i] << " ";
    }

    return 0;
}