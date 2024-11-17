void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size() ;
        if(n<=1){
            return;
        }
        else if(n > 1){
        
            for(int i = 0;i < n/2;i++){
                int temp = arr[i];
                arr[i]=arr[n-1-i];
                arr[n-1-i]=temp;
            }
            
        }
    }
