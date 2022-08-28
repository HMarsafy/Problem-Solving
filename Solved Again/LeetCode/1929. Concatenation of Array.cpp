  vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans((nums.size()*2) , 0);
        ///////////// 22 ms /////////////
        int new_index = nums.size();
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans[i] = nums[i];
            ans[i+new_index] = nums[i];
        }
        return ans;
    }
