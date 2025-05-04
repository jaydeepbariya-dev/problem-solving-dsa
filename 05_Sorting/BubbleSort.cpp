#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size){
  for(int i = 0; i < size; i++){
    for(int j = i; j < size-i-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void printArr(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() 
{
    int arr[] = {4, 2, 11, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Bubble Sort " << endl;
    printArr(arr, size);
    
    bubbleSort(arr, size);
    
    cout << "After Bubble Sort " << endl;
    printArr(arr, size);
    
    return 0;
}
