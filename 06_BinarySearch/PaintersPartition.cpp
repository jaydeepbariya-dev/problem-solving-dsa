#include <bits/stdc++.h>
using namespace std;

bool isPossible(int maxTime, vector<int> &arr, int k) {

    int painters = 1;
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > maxTime) {
            return false;
        }

        if (currSum + arr[i] > maxTime) {
            painters++;
            currSum = arr[i];
        } else {
            currSum += arr[i];
        }
    }

    return painters <= k;
}

int minTime(vector<int> &arr, int k) {

    int n = arr.size();

    int maxBoard = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxBoard) {
            maxBoard = arr[i];
        }
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int low = maxBoard;
    int high = totalSum;
    int res = totalSum;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (isPossible(mid, arr, k)) {
            res = mid;
            high = mid - 1; 
        } else {            
            low = mid + 1; 
        }
    }

    return res;
}

int main() {
    vector<int> arr = {5, 10, 30, 20, 15};
    int k = 3;
    int res = minTime(arr, k);
    cout << res << endl;

    return 0;
}
