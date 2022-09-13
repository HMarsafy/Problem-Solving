 vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0 ; i < nums.size() - 1 ; i+=2)
        {
            int freq = nums[i];
            while(freq--)
            {
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
    }
