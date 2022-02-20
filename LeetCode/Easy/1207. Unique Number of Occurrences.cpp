  bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        unordered_map<int,int> no;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            freq[arr[i]]++;
        }
        for(auto itr = freq.begin() ; itr != freq.end() ; itr++)
        {
            no[itr->second]++;
        }
        for(auto itr = no.begin() ; itr != no.end() ; itr++)
        {
            if(itr->second > 1) return false;
        }
        return true;
        
    }
