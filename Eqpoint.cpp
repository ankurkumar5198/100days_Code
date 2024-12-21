int equilibriumPoint(vector<int> &arr) {
        // code here
        int rsum = 0;
        for(int i:arr) rsum += i;
        int lsum = 0;
        for(int i=0;i<arr.size();i++){
            if(lsum == (rsum - lsum-arr[i])) return i+1;
            lsum += arr[i];
        }
        return -1;
    }
