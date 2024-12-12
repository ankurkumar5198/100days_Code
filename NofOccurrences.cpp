int countFreq(vector<int>& arr, int target) {
        // code here
        int cnt=0;

        for(auto it :arr){

            if(it==target )cnt++;

        }

        return cnt;
    }
