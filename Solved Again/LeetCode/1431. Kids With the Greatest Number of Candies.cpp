 vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        vector<bool> ans;
        for(int i = 1 ; i < candies.size() ; i++)
        {
            if(candies[i] > max) max = candies[i];
        }
        for(int i = 0 ; i < candies.size() ; i++)
        {
            if(candies[i] + extraCandies >= max) ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
