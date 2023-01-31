/* With Space Complicty o(n) */
   void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        vector<int> c = nums;
        for(int i = 0 ; i < size ; i++)
        {
            nums[((i+k)%size)] = c[i];
        }
    }

/* With o(1) Space Complixty */
