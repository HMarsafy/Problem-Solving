 int numIdenticalPairs(vector<int>& nums) {
        int pairs = 0 ;
        int index = 0;
        while (index != nums.size())
        {
            for(int i  = index+1 ; i < nums.size() ; i++)
            {
                if(nums[index] == nums[i]) pairs++;
            }
            index++;
        }
        return pairs;
    }
