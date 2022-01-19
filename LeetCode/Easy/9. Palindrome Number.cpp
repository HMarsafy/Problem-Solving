  bool isPalindrome(int x) {
        vector<int> digits;
        if(x < 0) return 0;
        if(x < 10) return 1;
        while(x != 0)
        {
            digits.push_back(x%10);
            x/=10;
        }
        for(int i = 0 ; i<digits.size() ; i++)
        {
            if(digits[i] != digits[digits.size()-1-i]) return 0;
        }
        return 1;
    }
