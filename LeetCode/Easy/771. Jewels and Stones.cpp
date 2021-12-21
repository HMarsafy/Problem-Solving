  int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> count;
        for(int i = 0 ; i < stones.size() ; i++)
        {
            count[stones[i]]++;
        }
        int stones_no = 0 ;
        for(int i = 0 ; i< jewels.size() ; i++)
        {
            stones_no+=count[jewels[i]];
        }
        return stones_no;
    }
