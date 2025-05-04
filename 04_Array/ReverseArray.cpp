#include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
  int left = 0;
  int right = size - 1;
  
  while(left <= right){
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    right--;
    left++;
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
    int arr[] = {4,2,11,8,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Before Reversing: " << endl;
    printArr(arr, size);
    
    reverseArr(arr, size);
    
    cout << "After Reversing: " << endl;
    printArr(arr, size);
    
    return 0;
}
