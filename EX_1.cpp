#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "enter the number of elements in the array: ";
    cin>> n;

    int arr[n];
    for(int i = 0;i < n;i++){
        cout << "enter the element at index " << i << ": ";
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1;i <n ;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"the largest number of the array is"<<max;
}