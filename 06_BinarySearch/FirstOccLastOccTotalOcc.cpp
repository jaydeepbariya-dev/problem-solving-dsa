#include <iostream>
using namespace std;

int firstOcc(int nums[], int size, int key){
    int start = 0, end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
      if(nums[mid] == key){
        ans = mid;
        end = mid - 1;
      }
      else if(nums[mid] > key){
        end = mid - 1;
      }
      else if(nums[mid] < key){
        start = mid + 1;
      }
      mid = start + (end - start)/2;
    }
    
    return ans;
}

int lastOcc(int nums[], int size, int key){
    int start = 0, end = size - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    
    while(start <= end){
      if(nums[mid] == key){
        ans = mid;
        start = mid + 1;
      }
      else if(nums[mid] > key){
        end = mid - 1;
      }
      else if(nums[mid] < key){
        start = mid + 1;
      }
      mid = start + (end - start)/2;
    }
    
    return ans;
}

int main() 
{
    int nums[] = {7,9,9,9,10,10,15,22,22,22,34};
    int size = sizeof(nums)/sizeof(nums[0]);
    int key;
    cin >> key;
    cout << "First Occurance of "<< key << " is at index: " << firstOcc(nums, size, key) << endl;
    cout << "Last Occurance of "<< key << " is at index: " << lastOcc(nums, size, key) << endl;
    cout <<"Total Occurances: " << lastOcc(nums, size, key) - firstOcc(nums, size, key) + 1 << endl; 
    return 0;
}
