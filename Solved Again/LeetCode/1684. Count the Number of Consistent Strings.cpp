 int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0 ;
        unordered_map<char,bool> allow;
        for(int i = 0 ; i < allowed.size() ; i++)
        {
            allow[allowed[i]] = 1 ;
        }
        for(int i = 0 ; i < words.size() ; i++)
        {
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                if(allow[words[i][j]] == 0) break;
                if(j == words[i].size() -1) count++;
            }
        }
        return count;
    }
