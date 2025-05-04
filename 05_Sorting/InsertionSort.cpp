#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
  for(int i = 1; i < size; i++){
    int element = arr[i];
    int j = i-1;
    
    while(j >= 0 && arr[j] > element){
      arr[j+1] = arr[j];
      j--;
    }
    
    arr[j+1] = element;
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
    
    cout << "Before Insertion Sort " << endl;
    printArr(arr, size);
    
    insertionSort(arr, size);
    
    cout << "After Insertion Sort " << endl;
    printArr(arr, size);
    
    return 0;
}
