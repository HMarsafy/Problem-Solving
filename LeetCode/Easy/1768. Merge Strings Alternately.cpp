 string mergeAlternately(string word1, string word2) {
        string out = "";
        int len = min(word1.size(), word2.size());
        for(int i = 0 ; i< len ; i++)
        {
            out += word1[i];
            out += word2[i];
        }
        if((word1.size() - len) == 0)
        {
            int rest = word2.size() - len ;
            while(rest--)
            {
                out += word2[len++];
            }
        }
        else
        {
            int rest = word1.size() - len ;
            while(rest--)
            {
                out += word1[len++];
            }
        }
        return out;
    }
//////////////////////////////////////////////////////////////////// ANOTHER SOLUTION ////////////////////////////////////////////////////////////////

string mergeAlternately(string word1, string word2) {
        string out = "";
        int len = max(word1.size(), word2.size());
        for(int i = 0 ; i< len ; i++)
        {
            if(i < word1.size()) 
                out += word1[i];
            if(i < word2.size())
                out += word2[i];
        }
       
        return out;
    }
