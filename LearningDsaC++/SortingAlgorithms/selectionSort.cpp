#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (array[j] < array[minIndex])
                minIndex = j;
        swap(array[minIndex], array[i]);
    }
}

int main() {
    int array[] = {64, 25, 12, 22, 11};
    int n = sizeof(array) / sizeof(array[0]);
    selectionSort(array, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    return 0;
}
