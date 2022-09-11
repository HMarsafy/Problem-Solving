 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int no_smaller = 0; 
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            for(int j = 0 ; j < nums.size() ; j++)
            {
                if(i == j ) continue;
                else
                {
                    if(nums[j] < nums[i]) no_smaller++;
                }
            }
            ans.push_back(no_smaller);
            no_smaller = 0 ;
        }
        return ans;
    }
