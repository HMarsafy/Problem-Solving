/* O(nLOG(n)) */
  bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());
        if(s==t) return 1;
        return 0;
    }


/* O(n) */

bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return 0;
        unordered_map<char,int> freq;
        for(int i = 0 ; i< t.size() ; i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for(auto itr = freq.begin() ; itr != freq.end() ; itr++)
        {
            if(itr -> second != 0) return 0;
        }
        return 1;
    }
