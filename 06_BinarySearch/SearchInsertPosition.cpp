#include <iostream>
using namespace std;

int searchInsertPosition(int nums[], int size, int target) {
    int start = 0, end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    // start is the correct insert position
    return start;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 4;
    cout << "Insert position of " << target << " is at index: "
         << searchInsertPosition(nums, size, target) << endl;
    return 0;
}
