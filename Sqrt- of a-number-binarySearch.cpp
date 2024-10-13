class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int ans=1;
        long long int low=1,high=n;
        while(high>=low){
            long long int mid=low+(high-low)/2;
            if((mid*mid)<=n){
                ans=mid;
                low=mid+1;
            }
            else
                high=mid-1;
        }
     return ans;  
    }
};
