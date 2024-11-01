#include <iostream>
using namespace std;

void deleteFromBottom(int arr[], int &size) {
    if (size == 0) {
        cout << "Array is empty. Nothing to delete.";
    }
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void printArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty.";
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original array: ";
    printArray(arr, size);

    deleteFromBottom(arr, size);
    cout << "Array after deleting from bottom: ";
    printArray(arr, size);
}