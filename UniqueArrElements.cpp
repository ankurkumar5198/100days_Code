int minIncrements(vector<int>& arr) {
        // Code here
        int out = 0;
        sort(arr.begin(), arr.end());
        int prev = arr[0];
        for(int i=1; i<arr.size(); i++)
        {
            if(arr[i] <= prev)
            {
                out += (prev + 1 - arr[i]);
                prev = prev + 1;
            }
            else prev = arr[i];
        }
        return out;
    }
