void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
        int n=a.size()-1,m=0;
        while(n>=0 && m<b.size())
        {
            if(a[n]<b[m])
            break;
            else
            swap(a[n--],b[m++]);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
