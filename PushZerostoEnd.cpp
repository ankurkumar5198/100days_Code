void pushZerosToEnd(vector<int>& arr) {
        // code here
        int d=0,count=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            
            if(arr[i]){
                arr[d]=arr[i];
                d++;
            }
            else
                count++;
        }
        
        for(int i=n-1;i>=(n-count);i--){
            arr[i]=0;
        }
        
        
        return;
    }
