   bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        vector<int> freq(26,0);
        for(int i =0 ; i<s.size() ; i++)
            freq[(int)s[i] - 'a']++;
        for(int i = 0 ;  i<t.size() ; i++)
        {
            int index = (int)t[i] - 'a';
            if(freq[index] == 0) return 0;
            freq[index]--;
        }
        return 1;
        
///////////////////////////////////////////////////////////////// ANOTHER SOLUTION ///////////////////////////////////////////////////
        /*if(s.size() != t.size()) return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i<s.size() ; i++)
        {
            if(s[i] != t[i]) return 0;
        }
        return 1;*/
    }
