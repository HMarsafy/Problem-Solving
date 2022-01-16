   string truncateSentence(string s, int n) {
       string out="";
       int no_of_words = 0;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i]==' ')
            {
                no_of_words++;
                if(no_of_words == n) break;
            }
            out+=s[i];
        }
        return out;
    }
