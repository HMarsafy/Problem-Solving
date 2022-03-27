 int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i =0  ; i <nums.size() ; i++)
        {
            m[nums[i]]++;
        }
        int s = nums.size() / 2;
        for(auto i = m.begin() ; i!=m.end() ; i++)
        {
            if(i->second > s) return i->first;
        }
        return 0;
    }
