
class Solution {
  public:

    bool isPossible(vector<int> &arr, int k, int mid){
        int studentCount = 1;
        int pageSum = 0;
        
        for(int i = 0; i < arr.size(); i++){
            pageSum += arr[i];
            
            if(pageSum > mid){
                studentCount++;
                pageSum = arr[i];
            }
            
            if(studentCount > k) {
                return false;
            }
        }
        
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        
        if(k > arr.size()) return -1;
        
        int start = 0;
        int end = 0;
        int ans = -1;

        for(int i = 0; i < arr.size(); i++){
            end += arr[i];
        }

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(isPossible(arr, k, mid)){
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};
