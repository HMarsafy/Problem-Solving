 bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> m1;
        for(int i = 0 ; i<word1.size() ; i++)
        {
            m1[word1[i]]++;
        }
        for(int i = 0 ; i<word2.size() ; i++)
        {
            m1[word2[i]]--;
        }
        for(auto itr = m1.begin() ; itr != m1.end() ; itr++)
        {
            if(abs(itr->second) > 3) return false;
        }
        return true;   
    }
