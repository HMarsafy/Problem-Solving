int countKDifference(vector<int>& nums, int k) {
        int pair = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = i+1 ; j <nums.size() ; j++)
            {
                if(abs(nums[i] - nums[j]) == k ) pair++;
            }
        }
        return pair;
    }