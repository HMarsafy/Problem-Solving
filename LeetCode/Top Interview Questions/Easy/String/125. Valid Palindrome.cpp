  bool isPalindrome(string s) {
        string only_letters ="";
        for(int i = 0 ; i<s.size() ;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(isalpha(s[i]) && isupper(s[i])) s[i]+=32;
                only_letters+=s[i];
            }
        }
        if(only_letters.size() == 0) return 1;
        int i = 0;
        int j = only_letters.size()-1;
        while(j > i)
        {
            if(only_letters[i++] != only_letters[j--]) return 0;
        }
        return 1;
    }
