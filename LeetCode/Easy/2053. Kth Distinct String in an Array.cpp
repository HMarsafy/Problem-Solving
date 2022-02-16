string kthDistinct(vector<string>& arr, int k) {
        string out = "";
        unordered_map<string,int> freq;
        for(int i = 0 ; i<arr.size() ; i++)
        {
            freq[arr[i]]++;
        }
        int ind = 0;
        for(int i = 0 ; i<arr.size() ; i++)
        {
          if(freq[arr[i]] == 1)
          {
              ind++;
              if(ind == k)out = arr[i];
          }        
        }
        
        return out;
    }
