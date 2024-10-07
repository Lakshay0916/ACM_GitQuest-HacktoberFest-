#include <iostream>
using namespace std;

void printArray(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl;
} 

void Bubble_Sort(int arr[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
        printArray(arr, n);
    }
}

int main() 
{ 
    int arr[] = {6, 0, 3, 5}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    Bubble_Sort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0;
}
