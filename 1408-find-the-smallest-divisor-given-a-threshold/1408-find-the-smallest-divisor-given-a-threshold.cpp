class Solution {
public:
    int check(vector<int>&arr,int divisor){
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+ceil((float)arr[i]/divisor);
        }
        return sum;
    } 
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int ans;
        int maxi=*max_element(nums.begin(),nums.end());
        int low=1,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            int totalSum=check(nums,mid);
            if(totalSum<=threshold){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};