#include <iostream>
using namespace std;

void selection_Sort(int arr[],int n){
    int i,j,x;
    for(i = 0;i < n-1;i++){
        x=i;
        for(j = i+1;j<n;j++){
            if(arr[j]<arr[x]){
                x=j;
            }
            
        }
        if(x != i){
            swap(arr[x], arr[i]);
        }
    }
    
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
        cout << endl; 
    } 
} 
  
int main() 
{ 
    int arr[] = { 64, 25, 12, 22, 11 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    selection_Sort(arr, n); 
    cout << "Sorted array: \n"; 
    printArray(arr, n); 
    return 0;
}

