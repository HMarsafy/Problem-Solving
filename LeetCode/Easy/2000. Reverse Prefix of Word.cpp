  string reversePrefix(string word, char ch) {
        int ind = word.find(ch);
        string out="";
        for(int i = ind ; i>=0 ; i--)
        {
            out+=word[i];
        }
        out+=word.substr(ind+1,(word.size()-(ind+1)));
        return out;
    }
};
