    string replaceDigits(string s) {
        string output="";
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(i % 2 == 0) output += s[i];
            else 
            {
                char c = s[i-1] + (s[i] - 48);
                output += c;
            }
        }
        return output;
    }
