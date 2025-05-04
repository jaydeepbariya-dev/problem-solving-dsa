#include <iostream>
#include<climits>

using namespace std;

int secondLargest(int arr[], int size){
  int largestElement = INT_MIN;
  int secondLargestElement = -1;
  
  for(int i = 0; i < size; i++){
    if(arr[i] > largestElement){
      secondLargestElement = largestElement;
      largestElement = arr[i];
    }
    else if(arr[i] > secondLargestElement && arr[i] != largestElement) {
      secondLargestElement = arr[i];
    }
  }
  
  return secondLargestElement;
}

int main() 
{
    int arr[] = {4,2,15,8,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The second largest element is: " << secondLargest(arr, size) << endl;
    
    return 0;
}
