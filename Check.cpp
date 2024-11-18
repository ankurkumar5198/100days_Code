unordered_map<int,int> um;
//ok
        for(int i=0;i<k;i++)
        {
            if(um.find(arr[i]) != um.end())
            {
                if(um[arr[i]]-i < k)
                {
                    return true;
                }
            }
            um[arr[i]]=i;
        }
        for(int i=k;i<arr.size();i++)
        {
            if(um.find(arr[i]) != um.end())
            {
                if(um[arr[i]]-i < k && um[arr[i]]-i>=(-k))
                {
                    return true;
                }
            }
            um[arr[i]]=i;
        }
        return false;
