int minStartValue(vector<int>& nums) {
        bool negativeFound = false;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
                negativeFound = true;
        }
        
        if(!negativeFound)
            return 1;
        int min = 1 ; 
        int sum = min;
        bool flag = true;
        while(flag)
        {
            flag = false;
            for(int i = 0 ; i< nums.size() ; i++)
            {
                sum+=nums[i];
                if(sum <= 0)
                {
                    min++;
                    sum = min ;
                    flag = true;
                    break;
                }
            }
        }
        return min;
    }
