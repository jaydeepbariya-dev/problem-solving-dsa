class Solution {
public:
    int binarySearch(vector<int>& nums, int start, int end, int target){
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }

    int findPivot(vector<int>& nums){
        int start = 0, end = nums.size() - 1;

        if(nums[start] <= nums[end]) return 0; // Already sorted, no rotation

        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] > nums[mid + 1]) return mid + 1;
            else if(nums[mid] >= nums[start]) start = mid + 1;
            else end = mid - 1;
        }

        return 0;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return -1;

        int pivot = findPivot(nums);

        // Decide which part to search
        if(target >= nums[pivot] && target <= nums[n - 1]){
            return binarySearch(nums, pivot, n - 1, target);
        } else {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
