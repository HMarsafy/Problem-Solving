vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int num = nums[i];
            int comp = target - num;
            auto ptr = mp.find(comp);
            if(ptr != mp.end())
            {
                return{ptr->second , i};
            }
            mp[num] = i;
        }

            return {};
    }
