//Brute force approach - Time Complexity O(n^2) , Space Complexity - O(1)
vector<int> subarraySum(vector<int> &arr, int target) {

        int arr_size=arr.size();
        
        
        for(int i = 0;i < arr_size;i++){
            int sum=0;
            for(int j = i;j < arr_size;j++){
                sum = sum+arr[j];
                if(sum==target){
                    return{i+1,j+1};
                }
                
            }
        }
  return {-1};
}

