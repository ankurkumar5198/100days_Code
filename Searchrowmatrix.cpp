bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            int low=0;
            int high=m-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(mat[i][mid]==x)
                return true;
                else if(mat[i][mid]>x)
                high=mid-1;
                else
                low=mid+1;
            }
        }
        return false;
    }
