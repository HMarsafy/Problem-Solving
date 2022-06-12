 int minimumSum(int num) {
        vector<int> nums;
        while(num != 0)
        {
            nums.push_back(num%10);
            num = num / 10 ;
        }
        sort(nums.begin() , nums.end());
        int num1 = 0 ;
        int num2 = 0;
        int power = 1 ;
        for(int i = 0 ; i < nums.size() ; i+=2)
        {
            num1 = num1 + (nums[i] * pow(10,power--));
        }
        power = 1 ;
        for(int i = 1 ; i < nums.size() ; i+=2)
        {
            num2 = num2 + (nums[i] * pow(10,power--));
        }
        return num1+num2;
    }
