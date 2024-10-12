class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1, ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;
            //check if left part is sorted
            if (nums[low] <=  nums[mid]) {
                if (nums[low] <= target && target<nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            //else right part is sorted
            else{
                if (nums[mid] < target && target <= nums[high])
                   low=mid+1;
                else
                   high=mid-1;;
            } 
        }
            return -1;
    }
};