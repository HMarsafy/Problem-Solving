 string reverseWords(string s) {
     string out="";
     string word="";
        for(int i =0 ; i< s.size() ; i++)
        {
            if(s[i] == ' ')
            {
                reverse(word.begin() , word.end());
                out+=word+" ";
                word="";
            }
            else
            {
                word+=s[i];
            }
        }
        reverse(word.begin() , word.end());
        out+=word;
        return out;
    }
