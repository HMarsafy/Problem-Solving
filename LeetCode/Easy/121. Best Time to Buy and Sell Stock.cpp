 int maxProfit(vector<int>& prices) {
      int buy = 10001;
      int profit = 0;
      for(int i = 0 ; i<prices.size() ; i++)
      {
          if(prices[i] < buy) buy = prices[i];
          int diff = prices[i] - buy;
          if(diff > profit)
          {
              profit = diff;
          }
      }
        return profit;
    }
