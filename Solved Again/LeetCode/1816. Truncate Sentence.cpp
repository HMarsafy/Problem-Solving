   string truncateSentence(string s, int k) {
     string out = "";
     for(int i = 0 ; i < s.size() ; i++)
     {
         if(s[i] == ' ') if(!(--k)) break;
         out+=s[i];
     }
        return out;
    }
