int longestConsecutive(vector<int>& arr) {
        // Your code here
         int ans=1;
        unordered_map<int,int>mp;
        for(int x:arr){
            if(!mp[x]){
                int left=mp[x-1];
                int right=mp[x+1];
                int total=left+right+1;
                mp[x]=total;
                mp[x-left]=total;
                mp[x+right]=total;
                ans=max(ans,total);
            }
        }
        return ans;
    }
