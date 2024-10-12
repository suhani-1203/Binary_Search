class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=-1,last=-1,low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+((high-low)/2);
            if(nums[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1; 
        }
        if(first==-1){
            ans.push_back(first);
            ans.push_back(last);
            return ans;
        }
        else{
            low=0;high=nums.size()-1;
            while(low<=high){
                int mid=low+((high-low)/2);
                if(nums[mid]<=target){
                    last=mid;
                    low=mid+1;
                }
                else
                    high=mid-1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};