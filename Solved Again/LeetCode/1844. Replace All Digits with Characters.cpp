   string replaceDigits(string s) {
        string out = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isalpha(s[i])) out += s[i];
            else out+= s[i-1] + s[i] - '0'; 
        }
        return out;
    }
