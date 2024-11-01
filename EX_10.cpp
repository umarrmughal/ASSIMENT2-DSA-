#include <iostream>
using namespace std;

void addArrays(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    const int size = 5;
    int arr1[size] = {1, 2, 3, 4, 5};
    int arr2[size] = {10, 20, 30, 40, 50};
    int result[size];

    addArrays(arr1, arr2, result, size);

    cout << "Array 1: ";
    printArray(arr1, size);

    cout << "Array 2: ";
    printArray(arr2, size);

    cout << "Resultant array after addition: ";
    printArray(result, size);
}