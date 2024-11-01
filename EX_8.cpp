#include <iostream>
using namespace std;

void searchByIndex(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
    } else {
        cout << "Element at index " << index << " is: " << arr[index] << endl;
    }
}

void searchByValue(int arr[], int size, int value) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            cout << "Element " << value << " found at index: " << i ;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << value << " not found in the array.";
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int choice;

    cout << "Choose search method:";
    cout << "1. Search by index";
    cout << "2. Search by value";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        int index;
        cout << "Enter index to search: ";
        cin >> index;
        searchByIndex(arr, size, index);
    } else if (choice == 2) {
        int value;
        cout << "Enter value to search: ";
        cin >> value;
        searchByValue(arr, size, value);
    } else {
        cout << "Invalid choice!";
    }
}
