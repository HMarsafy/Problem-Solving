int numJewelsInStones(string jewels, string stones) {
        int ans = 0 ;
        unordered_map<char,int> mp;
        for(int i = 0 ; i < jewels.size() ; i++)
        {
            mp[jewels[i]] = 1;
        }
        for(int i = 0 ; i < stones.size() ; i++)
        {
            if(mp[stones[i]]) ans++;
        }
        return ans;
    }
