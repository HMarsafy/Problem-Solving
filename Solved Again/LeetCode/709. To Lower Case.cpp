string toLowerCase(string s) {
        string out = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(isupper(s[i])) out += tolower(s[i]);
            else out+= s[i];
        }
        return out;
    }
