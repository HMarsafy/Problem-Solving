 void reverseString(vector<char>& s) {
        string w ="";
        for(int i = s.size()-1 ; i >=0 ; i--)
        {
            w+=s[i];
        }
        for(int i = 0 ; i <w.size() ; i++)
        {
            s[i] = w[i];
        }
    }
