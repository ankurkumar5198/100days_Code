int maxWater(vector<int> &arr) {
        // code here
        int l=0,h=arr.size()-1,area=0,t=0;
        while(l<h)
        {
            area=min(arr[l],arr[h])*(h-l);
            t=max(t,area);
            if(arr[l]<arr[h])
            l++;
            else
            h--;
        }
        return t;
    }
