class Solution {
public:
int countSubarrays(vector<int> &arr, int subarrays) {
    int n = arr.size(); 
    int totalSubarrays = 1;
    long long sumSubarrays = 0;
    for (int i = 0; i < n; i++) {
        if (sumSubarrays+ arr[i] <= subarrays) {
            sumSubarrays += arr[i];
        }
        else {
        
            totalSubarrays++;
            sumSubarrays = arr[i];
        }
    }
    return totalSubarrays;
}
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if (k > n) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int noOfSubarrays = countSubarrays(nums, mid);
            if (noOfSubarrays > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};