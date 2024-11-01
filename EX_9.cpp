#include <iostream>
using namespace std;

void updateAtIndex(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
    } else {
        arr[index] = newValue;
        cout << "Element at index " << index << " updated to: " << newValue << endl;
    }
}

void printArray(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Original array: ";
    printArray(arr, size);

    int index, newValue;
    cout << "Enter the index to update: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;

    updateAtIndex(arr, size, index, newValue);

    cout << "Updated array: ";
    printArray(arr, size);

    return 0;
}