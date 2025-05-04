#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start)/2;
  
  while(start <= end){
    
    if(arr[mid] == target) return mid;
    else if(arr[mid] > target) end = mid - 1;
    else if(arr[mid] < target) start = mid + 1;
    
    mid = start + (end - start)/2;
  }
  
  return -1;
}

int main() 
{
    int arr[] = {12,14,11,43,56,78,21};
    int target = 56;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Target "<< target << " is at index " << binarySearch(arr, size, target) << endl;
    return 0;
}
