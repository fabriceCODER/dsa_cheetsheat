#include <iostream>
using namespace std;

void insertionSort(int array[], int n) {
    for (int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {12, 11, 13, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    insertionSort(array, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}
