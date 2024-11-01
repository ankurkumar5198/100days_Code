long long maxSum(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        int n = arr.size();
        for (int i = 0; i < n / 2; ++i) {
            sum += abs(arr[i] - arr[n - i - 1]) * 2;
        }

        return sum;
    }
