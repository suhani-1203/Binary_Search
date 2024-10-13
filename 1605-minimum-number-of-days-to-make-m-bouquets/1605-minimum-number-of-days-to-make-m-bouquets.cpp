class Solution {
public:
    bool possible(vector<int>&arr,int day,int m,int k){
        int noOfB=0,count=0;
        for(int i=0;i<arr.size();i++){
                if(arr[i]<=day)
                    count++;
                else{
                    noOfB+=(count/k);
                    count=0;
                }
            }
            noOfB+=(count/k);
            return noOfB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int maxDay=INT_MIN,minDay=INT_MAX;
        long long int val= m*1ll*k*1ll;
        int n=bloomDay.size();
        if(val>n)
            return -1;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<minDay)
                minDay=bloomDay[i];
            if(bloomDay[i]>maxDay)
                maxDay=bloomDay[i];
        }
        int low=minDay,high=maxDay;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
};