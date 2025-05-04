#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
  for(int i = 0; i < size; i++){
    if(arr[i] == target) return i;
  }
  return -1;
}

int main() 
{
    int arr[] = {4,2,11,8,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    
    cout << "Element " << target << " is at index: " << linearSearch(arr, size, target) << endl;
    return 0;
}
