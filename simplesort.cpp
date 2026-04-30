#include <iostream>
using namespace std;

// simple sort 
void simpleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9, 3, 7, 1, 6};
    int n = 5;

    simpleSort(arr, n);

    cout << "Simple Sort Result: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}