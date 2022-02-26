   bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        for(int i =0 ; i< s.size() ; i++)
        {
            freq[s[i]]++;
        }
        int occ =( freq.begin())->second;
          for(auto itr = freq.begin() ; itr!= freq.end() ; itr++)
          {
                if(itr-> second != occ) return false;
          }
        return true;
    }
