 int sumOfUnique(vector<int>& nums) {
        int sum = 0 ;
        unordered_map<int,int> u;
        for(int i = 0 ; i< nums.size() ; i++)
        {
             u[nums[i]]++;
        }
        for(int i = 0 ; i< nums.size() ; i++)
        {
            if(u[nums[i]] == 1) sum+=nums[i];
        }
        return sum;
    }
