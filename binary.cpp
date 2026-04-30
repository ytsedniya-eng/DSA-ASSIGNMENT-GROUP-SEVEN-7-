#include <iostream>
using namespace std;

bool binarySearch(int dataElement[], int n, int key) {
    int top = n - 1, bottom = 0, middle;
    bool found = false;

    while (top >= bottom) {
        middle = bottom + (top - bottom) / 2;

        if (dataElement[middle] == key) {
            found = true;
            break;
        }
        else if (dataElement[middle] < key) {
            bottom = middle + 1;
        }
        else {
            top = middle - 1;
        }
    }

    return found;
}

int main() {
    int dataElement[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 35;

    if (binarySearch(dataElement, n, key))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}