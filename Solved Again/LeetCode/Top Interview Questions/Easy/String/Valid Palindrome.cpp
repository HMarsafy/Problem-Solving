bool isPalindrome(string s) {
        string all ="";
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                all+=tolower(s[i]);
            }
        }
        cout<<all;
        int start = 0;
        int end = all.size()-1;
        while(start < end)
        {
            if(all[start++] != all[end--]) return 0;
        }
        return 1;
    }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
