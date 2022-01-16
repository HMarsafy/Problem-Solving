 vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size() , -1);
        for(int i = 0 ; i < nums.size() ;i++)
        {
            if(target[index[i]] == -1) 
            {
                target[index[i]] = nums[i];
            }
            else
            {
                int ind = index[i]; int loop = target.size()-1;
                while(loop > ind)
                {
                    target[loop--] = target[loop-1];
                }
                target[ind] = nums[ind];
            }
        }
        return target;
    }
