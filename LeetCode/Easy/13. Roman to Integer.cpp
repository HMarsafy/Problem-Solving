int romanToInt(string s) {
        int in = 0 ;
        unordered_map<char,int> m;
        m['I'] = 1; m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50; m['C'] = 100;
        m['D'] = 500; m['M'] = 1000;
        for(int i = 0 ; i< s.size() ; i++)
        {
            if((s[i] == 'I' && s[i+1] == 'V'))
            {
                in+= 4;
                i++;
            }
            else if((s[i] == 'I' && s[i+1] == 'X'))
            {
                in+= 9;
                i++;
            }
             else if((s[i] == 'X' && s[i+1] == 'L'))
            {
                in+= 40;
                 i++;
            }
             else if((s[i] == 'X' && s[i+1] == 'C'))
            {
                in+= 90;
                 i++;
            }
             else if((s[i] == 'C' && s[i+1] == 'D'))
            {
                in+= 400;
                 i++;
            }
             else if((s[i] == 'C' && s[i+1] == 'M'))
            {
                in+= 900;
                 i++;
            }
            else
            {
                in+=m[s[i]];
            }
        }
        return in;
    }
