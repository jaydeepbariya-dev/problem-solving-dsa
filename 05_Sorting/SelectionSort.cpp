#include <iostream>
using namespace std;

void selectionSort(int arr[], int size){
  for(int i = 0; i < size; i++){
    int minIndex = i;
    for(int j = i; j < size; j++){
      if(arr[j] < arr[minIndex]) minIndex = j;
    }
    int temp = arr[i];
    arr[i] = arr[minIndex];
    arr[minIndex] = temp;
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
    
    cout << "Before Selection Sort " << endl;
    printArr(arr, size);
    
    selectionSort(arr, size);
    
    cout << "After Selection Sort " << endl;
    printArr(arr, size);
    
    return 0;
}
