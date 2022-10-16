 bool isPalindrome(int x) {
        if(x<0) return 0;
        vector<int> n;
        while(x != 0)
        {
            n.push_back(x%10);
            x /= 10;
        }
        int start = 0 ;
        int end = n.size()-1;
        while(start < end)
        {
            if(n[start++] != n[end--]) return 0;
        }
        return 1;
    }
