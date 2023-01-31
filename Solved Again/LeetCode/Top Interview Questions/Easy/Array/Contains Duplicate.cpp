/* o(nLog(n)) Solution */
  bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i<nums.size()-1 ; i++)
        {
            if(nums[i] == nums[i+1]) return 1;
        }
        return 0;
    }
    
/* O(n) Solution */
    bool containsDuplicate(vector<int>& nums) {
        if (nums.size() == 1) return 0;
        unordered_map<int,int> freq;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            freq[nums[i]]++;
        }
        for(auto itr = freq.begin() ; itr != freq.end() ; itr++)
        {
            if(itr->second > 1) return 1;
        }
        return 0;
    }
