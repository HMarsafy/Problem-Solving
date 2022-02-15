 int findFinalValue(vector<int>& nums, int original) {
        int out = original;
        for(int i = 0 ; i<nums.size() ; i++)
        {
            if(nums[i] == out )
            {
                out = out * 2;
                i = -1;
            }
        }
        return out;
    }

///////////////////////////////////////////////////////// ANOTHER SOLUTION //////////////////////////////////////////////////////////////////////////////

int findFinalValue(vector<int>& nums, int original) {
        int out = original;
        unordered_map<int,bool> found;
         for(int i = 0 ; i<nums.size() ; i++)
         {
             found[nums[i]] = true;
         }
        while(found[out])
        {
            out *=2;
        }
        return out;
    }
