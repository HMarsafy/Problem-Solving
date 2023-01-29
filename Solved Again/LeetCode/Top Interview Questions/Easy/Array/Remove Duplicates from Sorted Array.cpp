    int removeDuplicates(vector<int>& nums) {
        int i = 0 ;
        int p = 1 ;
        while(p < nums.size())
        {
            if(nums[i] == nums[p])
                p++;
            else
            {
                nums[++i] =nums[p++];
            }
        }
        return i+1;
    }
