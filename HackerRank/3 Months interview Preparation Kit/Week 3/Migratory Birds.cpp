int migratoryBirds(vector<int> arr) {
    unordered_map<int , int > bird_freq;
    for(int i = 0 ; i < arr.size() ; i++)
        {
            bird_freq[arr[i]]++;
        }
        int max = -1 ;
        int id = INT_MAX;
    for(auto itr = bird_freq.begin() ; itr != bird_freq.end() ; itr++)
        {
            if(itr -> second >= max )
                {
                    if(itr -> second == max)
                        {
                            if(itr ->first < id)
                                id = itr ->first;
                        }
                    else{
                    max = itr -> second;
                    id = itr ->first;
                    }
                    
                }
        }
        return id;
}
