//Sum of Variable Length Subarrays
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int nums_size = nums.size();
        vector<int> pref(nums_size,nums[0]);
        
        for(int i = 1 ; i < nums_size; i++){
            pref[i] = pref[i-1] + nums[i];
            
        }
        int ans = 0 ;
        for(int i = 0 ; i < nums_size; i++){
            int l = max(0,i-nums[i]);
            ans += pref[i];
            if(l>0){
                ans -= pref[l-1];
            }
            
        }
        return ans;
        
    }
};
