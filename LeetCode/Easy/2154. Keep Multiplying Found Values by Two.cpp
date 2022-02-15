 int findFinalValue(vector<int>& nums, int original) {
        int out = original;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i] == out )
            {
                out = out * 2;
                i = -1;
            }
        }
        return out;
    }
