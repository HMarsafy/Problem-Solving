 vector<string> stringMatching(vector<string>& words) {
        unordered_set<string> s;
        for(int i = 0 ; i<words.size() ; i++)
        {
            string temp = words[i];
            for(int j= 0 ; j <words.size() ; j++)
            {
                if(i == j) continue;
                if(words[j].find(temp) != -1)
                {
                    s.insert(temp);
                } 
            }
        }
          vector<string> out(s.begin(),s.end());
          return out;
    }
