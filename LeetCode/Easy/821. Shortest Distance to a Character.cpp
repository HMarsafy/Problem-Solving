 vector<int> shortestToChar(string s, char c) {
        vector<int> len(s.size());
        unordered_set<int> is_c;
        for(int i = 0 ; i<s.size() ; i++)
        {
          if(s[i] == c)
          {
              is_c.insert(i);
          }
        }
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(is_c.find(i) != is_c.end()) len[i] = 0; 
            else
            {
                int min = s.size();
                for(auto itr = is_c.begin() ; itr != is_c.end() ; itr++)
                {
                    int dif = abs(i - *itr);
                    if(dif < min)
                    {
                        min = dif;
                    }
                }
                len[i] = min ;
            }
            
        }
        return len;
    }
    
