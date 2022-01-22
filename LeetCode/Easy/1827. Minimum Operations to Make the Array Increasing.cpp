    int minOperations(vector<int>& nums) {
        int out = 0 ;
        for(int i = 0 ; i < nums.size()-1 ; i++)
        {
            if(nums[i] < nums[i+1]) continue;
            else
            {
                out+=(nums[i]+1) - nums[i+1];
                nums[i+1] = nums[i]+1;
            }
        }
        return out;
    }
