int NthRoot(int n, int m)
	{
	    if(m==0 || m==1)
	        return m;
	    int ans=-1;
        int low=1,high=m;
        while(low<=high){
            int mid=(low+high)/2;
            long long temp=1;
            for(int i=1;i<=n;i++){
                temp=temp*mid;
                if(temp>m)
                    break;
            }
            if(temp==m){
                return mid;
            }
            else if(temp>m)
                high=mid-1;
            else
                low=mid+1;
        }
     return ans;
	}  
