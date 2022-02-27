 int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        for(int i = 0 ; i < candyType.size() ; i++)
        {
            s.insert(candyType[i]);
        }
        int no_of_types = candyType.size() / 2;
        if(s.size() >= no_of_types ) return no_of_types;
        return s.size();
        
    }
