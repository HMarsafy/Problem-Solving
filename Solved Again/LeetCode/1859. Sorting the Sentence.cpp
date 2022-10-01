 string sortSentence(string s) {
       int size = 1 ;
        for(int i = 0 ; i < s.size() ; i++)
            if(s[i] == ' ') size++;
        vector<string> v(size);
        string word = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isdigit(s[i]))
            {
                v[(s[i] - '0') - 1] = word;
                word = "";
            }
            else if (s[i] == ' ') continue;
            else word = word + s[i];
            
        }
        string out = "";
        for(int i = 0 ;  i < v.size() ; i++)
        {
            out = out + v[i] ;
            if(i == v.size()-1) break;
            out+=" ";
        }
        return out;
    }
