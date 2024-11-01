#include <iostream>

using namespace std;

int main(){
    int capacity = 10;
    int arr[capacity];
    int size = 5;

    cout << "enter "<< size <<" elements for the array: ";
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }

    int new_item;
    cout << "Enter the new item to be inserted at the bottom: ";
    cin>> new_item;
    arr[size] = new_item;

    if(size < capacity){
        arr[size] = new_item;
        size++;
    }else{
        cout<< "array is full cannot insert a new item.";
    }

    cout<< "updated array.";
    for(int i = 0;i<size ;i++){
        cout << arr[i];
    }

}