#include <iostream>
using namespace std;

//swap values
void swap(int &x, int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

// simple sort
void simplesort(int dataelement[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if(dataelement[i] > dataelement[j]){
                swap(dataelement[i], dataelement[j]);
            }
        }
    }
    }

    // bubble sort
    void bubblesort(int dataelement[], int n){
        for (int i = 0; i < n -1; i++){
            for (int j = n -1; j > i; j--){
            if (dataelement[j] < dataelement[j -1]){
                swap(dataelement[j], dataelement[j - 1]);
            } 
            }
        }
    } 
int main(){
    int dataelement[5] = {5,3,7,1,10};
    for (int i=0; i < 5; i++){
        cout << dataelement[i] << " ";
    }
    simplesort(dataelement, 5);
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << dataelement[i] << " ";
    }
    //simplesort(dataelement,5);
    bubblesort(dataelement, 5);
    cout << endl;
    for (int i=0; i < 5; i++){
        cout << dataelement[i] << " ";
    }
     return 0;
}
