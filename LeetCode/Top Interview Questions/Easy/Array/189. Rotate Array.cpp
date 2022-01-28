  void rotate(vector<int>& nums, int k) {
        vector<int> bk(nums);
        int size = nums.size();
        k= k%size;
        for(int i = 0 ; i< size ; i++)
        {
            nums[i+k] = bk[i]; 
        }
        
    }
