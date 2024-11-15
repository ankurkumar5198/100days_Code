int n=arr.size();
        int maxi=*max_element(arr.begin(),arr.end());
        int maxi1=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=maxi)
            {
                maxi1=max(maxi1,arr[i]);
            }
        }
        
        return maxi1
