 int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1 ;
        int sum = 0 ;
        for(int i = 0 ; i < accounts.size() ; i++)
            {
                for(int j = 0 ; j < accounts[i].size() ; j++)
                    {
                        sum += accounts[i][j];
                    }
            if(sum > max) max = sum;
            sum = 0;
            }
        return max;
    }
