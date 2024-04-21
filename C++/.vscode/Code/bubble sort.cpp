#include <iostream>
using namespace std;

// ½»»»º¯Êý
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

// Ã°ÅÝÅÅÐòº¯Êý
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {3, 5, 7, 9, 2, 1, 3, 6, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    // µ÷ÓÃÃ°ÅÝÅÅÐòº¯Êý
    bubbleSort(arr, n);

    cout << "sorted array:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
