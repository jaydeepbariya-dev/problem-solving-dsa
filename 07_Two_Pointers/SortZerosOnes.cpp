#include <iostream>
using namespace std;

void sortZerosOnes(int nums[], int size){
  int i = 0;
  int j = size - 1;
  
  while(i < j){
    // 0 is on left 
    if(i < j && nums[i] == 0) i++;
    
    // 1 is on right
    if(i < j && nums[j] == 1) j--;
    
    if(i < j){
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
      i++;
      j--;
    }
  }
}

void printArr(int nums[], int size){
  for(int i = 0; i < size; i++){
    cout << nums[i] << " ";
  }
  cout << endl;
}

int main() 
{
    int nums[] = {1,0,1,0,1,0};
    int size = sizeof(nums)/sizeof(int);
    
    cout << "Before: " << endl;
    printArr(nums,size);
    
    sortZerosOnes(nums,size);
    
    cout << "After: " << endl;
    printArr(nums,size);
    return 0;
}
