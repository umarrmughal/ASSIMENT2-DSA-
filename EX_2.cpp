#include <iostream>
using namespace std;

int main() {
    int capacity = 10; 
    int arr[capacity]; 
    int size = 5;       

    cout << "Enter " << size << " elements for the array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newItem;
    cout << "Enter the new item to insert at the top: ";
    cin >> newItem;

    if (size < capacity) {
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = newItem; 
        size++;           
    } else {
        cout << "Array is full. Cannot insert new item." << endl;
    }

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}