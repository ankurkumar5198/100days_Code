vector<int> countDistinct(vector<int> &a, int k) {
        // code here.
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i = 0 ; i < k; i++){
            m[a[i]]++;
        }
        ans.push_back(m.size());
        int j = 0;
        for(int i =k; i < a.size();i++){
            m[a[j]]--;
            if(m[a[j]] == 0){
                m.erase(a[j]);
                
            }
            j++;
            m[a[i]]++;
            ans.push_back(m.size());
        }
        return ans;
    }
