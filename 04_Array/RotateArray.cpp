#include <iostream>
using namespace std;

void rotateArr(int arr[], int size){
  int lastElement = arr[size-1];
  
  // Shift from right to left
  for(int i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];
  }
  
  arr[0] = lastElement;
}

void printArr(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() 
{
    int arr[] = {4,2,11,8,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Rotating: " << endl;
    printArr(arr, size);
    
    rotateArr(arr, size);
    
    cout << "After Rotating: " << endl;
    printArr(arr, size);
    
    
    
    return 0;
}
