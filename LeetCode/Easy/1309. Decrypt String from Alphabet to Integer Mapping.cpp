string freqAlphabets(string s) {
        string out = "";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if((i+2) < s.size() && s[i+2] == '#')
            {
                string temp = s.substr(i,2);
                int tmp = stoi(temp);
                out+='a'+(tmp-1);
                i+=2;
            }
            else
            {
                char temp = s[i];
                out+= (s[i] + 48);
            }
        }
        return out;
    }
