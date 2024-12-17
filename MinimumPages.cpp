int start=*max_element(arr.begin(),arr.end());
        int end=accumulate(arr.begin(),arr.end(),0);
        int ans=INT_MAX;
        int n=arr.size();
   
        if(k > n) return -1;
        while(start <= end)
        {
            int mid=start + (end-start)/2;
            
            int sum=0;
            int T=1;
            for(int i=0; i<n ;i++)
            {
                if(sum+arr[i] > mid)
                {
                    T++;
                    sum=arr[i];
                }
                
                else
                {
                    sum+=arr[i];
                }
            }
            
            if(T<=k)
            {
                end=mid-1;
                ans=min(ans,mid);
            }
            else{
                start=mid+1;
            }
        }
        
        return ans;
