  void moveZeroes(vector<int>& nums) {
        int non_zero_index = 0;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i] != 0)
            {
                nums[non_zero_index++] = nums[i];
            }
        }
        int no_of_zeros = nums.size() - (non_zero_index);
        while(no_of_zeros--)
        {
            nums[non_zero_index++] = 0;
        }
    }
