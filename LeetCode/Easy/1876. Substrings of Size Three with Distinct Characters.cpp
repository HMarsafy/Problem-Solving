 int countGoodSubstrings(string s) {
        if(s.size() < 3) return 0;
        int count = 0;
        for(int i = 0 ; i<=s.size() - 3 ; i++)
        {
            string t = s.substr(i,3);
            if(t[0]==t[1] || t[1]==t[2] || t[0]==t[2])
                continue;
            count++;
        }
        return count;
    }
