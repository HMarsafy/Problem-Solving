    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int out = 0 ;
        int flag ;
        if(ruleKey == "type") flag = 0;
        else if(ruleKey == "color") flag = 1;
        else if(ruleKey == "name") flag = 2;
        for(int i = 0 ; i < items.size() ; i++)
        {
            if(items[i][flag] == ruleValue) out++;
        }
        return out;
        
    }
