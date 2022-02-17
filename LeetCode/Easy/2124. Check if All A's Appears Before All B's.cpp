 bool checkString(string s) {
        bool bfound = false;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i] == 'b') bfound = true;
            if(s[i] == 'a' && bfound)
            {
                return false;
            }
        }
        return true;
    }
