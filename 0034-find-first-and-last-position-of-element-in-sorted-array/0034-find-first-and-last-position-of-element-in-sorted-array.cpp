class Solution {
public:
   /* int lowerboundOptimal(vector<int>& arr, int n, int target) {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperboundOptimal(vector<int>& arr, int n, int target) {
        int low = 0;
        int high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int lb = lowerboundOptimal(arr, n, target);
        if (lb == n || arr[lb] != target) {
            return {-1, -1};
        }
        int ub = upperboundOptimal(arr, n, target);
        return {lb, ub - 1};
    }
};*/

    int lowerBoundOptimal(vector<int>& arr, int n, int target) {
        int low = 0;
        int high = n - 1;
        int ans=n;
        while (low <= high) {
            int mid = (low +high)/2;
            if (arr[mid] >= target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
    int upperBoundOptimal(vector<int>& arr, int n, int target) {
        int low = 0;
        int high = n - 1;
        int ans=n;
        while (low <= high) {
            int mid = (low+high)/2;
            if (arr[mid] > target) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();
        int lb = lowerBoundOptimal(arr, n, target);
        if ((lb == n) || (arr[lb] != target))
            return {-1, -1};
        else {
            int ub = upperBoundOptimal(arr, n, target);
            return {lb, ub - 1};
        }
    }
};
