 int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0 ;
        int key = -1 ;
        if(ruleKey == "type")  key = 0;
        else if(ruleKey == "color") key = 1;
        else key = 2;
        for(int i = 0 ; i < items.size() ; i++)
        {
            if(items[i][key] == ruleValue) count++;
        }
        return count;
    }
