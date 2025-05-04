#include <iostream>
#include <climits>

using namespace std;

int findMax(int arr[], int size){
  int maxElement = INT_MIN;
  
  for(int i = 0; i < size; i++){
    if(arr[i] > maxElement) maxElement = arr[i];
  }
  
  return maxElement;
}

int findMin(int arr[], int size){
  int minElement = INT_MAX;
  
  for(int i = 0; i < size; i++){
    if(arr[i] < minElement) minElement = arr[i];
  }
  
  return minElement;
}

int main() 
{
    int arr[] = {4,2,11,8,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Max Element is: "<< findMax(arr, size) << endl;
    cout << "Min Element is: "<< findMin(arr, size) << endl;
    return 0;
}
