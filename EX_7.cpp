#include <iostream>
using namespace std;

void deleteAtLocation(int arr[], int &size, int loc) {
    if (loc < 0 || loc >= size) {
        cout << "Invalid location!" << endl;
        return;
    }
    for (int i = loc; i < size - 1; i++) {
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

    int loc;
    cout << "Enter the location to delete (0-based index): ";
    cin >> loc;

    deleteAtLocation(arr, size, loc);
    cout << "Array after deletion: ";
    printArray(arr, size);
}