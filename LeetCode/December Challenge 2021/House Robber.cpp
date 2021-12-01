class Solution {
public:
    int rob(vector<int>& nums) {
     if(nums.size() == 0) return 0 ;
     if(nums.size() == 1) return nums[0];
     vector<int> n(nums.size(),0);
     n[0] = nums[0];
     n[1] = max(nums[0] , nums[1]);
     for(int i = 2 ; i < nums.size() ; i++)
        {
         n[i] = max(nums[i] + n[i-2] , n[i-1]);
     }
        return n[nums.size()-1];
    }
};
