vector<int> numberOfLines(vector<int>& widths, string s) {
        vector<int> out;
        int lines=1;
        int last = 0;
        for(int i = 0 ; i<s.size() ; i++)
        {
            int index = s[i]-'a';
            last+=widths[index];
            if(last > 100)
            {
                lines++;
                i = i - 1;
                last = 0;
            }
        }
        return {lines , last};
    }
