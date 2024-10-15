class Solution {
public:
    int countDays(vector<int>&arr,int totalDays,int capacity){
        int totalWeight=0,noOfDays=1;
        for(int i=0;i<arr.size();i++){
            if((totalWeight+arr[i])>capacity){
                noOfDays++;
                totalWeight=arr[i];
            }
            else{
                    totalWeight+=arr[i];
            }
        }
        return noOfDays;

    } 
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxWeight=0,minWeight=INT_MIN;
        for(int i=0;i<n;i++){
            maxWeight+=weights[i];
            minWeight=max(minWeight,weights[i]);
        }
        int low=minWeight,high=maxWeight;
        while(low<=high){
            int mid=(low+high)/2;
            int daysTaken=countDays(weights,days,mid);
            if(daysTaken<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};