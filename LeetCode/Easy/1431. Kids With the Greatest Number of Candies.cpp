vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i = 0 ; i < candies.size() ; i++)
        {
            int sum = candies[i] + extraCandies;
            bool flag = true;
            for(int j = 0 ; j < candies.size() ; j++)
            {
                if(j == i) continue;
                if(candies[j] > sum)
                {
                    ans.push_back(0);
                    flag = false;
                    break;
                }
            }
            if(flag) ans.push_back(1);
        }
        return ans;
    }
