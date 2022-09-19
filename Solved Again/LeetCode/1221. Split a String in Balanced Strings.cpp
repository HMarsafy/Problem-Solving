 int balancedStringSplit(string s) {
        int out = 0 ; 
        int freq = 0 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == 'R') freq ++ ;
            else
                freq --;
            if(freq == 0) out++;
        }
        return out;
    }
