#include <iostream>
using namespace std;

int main() {
    int capacity = 10;  
    int arr[capacity];  
    int size = 5;       

    cout << "Enter " << size << " elements for the array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int newItem, loc;
    cout << "Enter the new item to insert: ";
    cin >> newItem;
    cout << "Enter the location (0 to " << size << ") to insert the item: ";
    cin >> loc;

    
    if (loc >= 0 && loc <= size && size < capacity) {
        for (int i = size; i > loc; i--) {
            arr[i] = arr[i - 1];
        }
        arr[loc] = newItem;  
        size++;             
    } else {
        cout << "Invalid location or array is full. Cannot insert new item.";
       
    }

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}