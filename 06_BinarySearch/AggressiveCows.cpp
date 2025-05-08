class Solution {
  public:
    bool isPossible(vector<int>& stalls, int k, int minDist) {
        int count = 1;  
        int lastPosition = stalls[0];  

        for (int i = 1; i < stalls.size(); i++) {
            if (stalls[i] - lastPosition >= minDist) {
                count++;
                lastPosition = stalls[i];  
            }
            if (count == k) {
                return true;  
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {

        sort(stalls.begin(), stalls.end());  
        
        int start = 1;  
        int end = stalls[stalls.size() - 1] - stalls[0];  
        
        int result = -1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isPossible(stalls, k, mid)) {
                result = mid;  
                start = mid + 1;  
            } else {
                end = mid - 1;  
            }
        }
        
        return result;
        
    }
};
