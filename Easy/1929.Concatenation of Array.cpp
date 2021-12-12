  vector<int> getConcatenation(vector<int>& nums) {
        
         int new_size = nums.size() * 2;
        vector<int> ans(new_size);
        for(int i = 0 ; i < nums.size() ; i++)
            {
                ans[i] = nums[i];
                ans[i+(new_size/2)]=nums[i];
            }
        return ans;
    }
