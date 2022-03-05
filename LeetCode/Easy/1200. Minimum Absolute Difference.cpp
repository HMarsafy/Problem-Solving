 vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
       sort(arr.begin() , arr.end());
        int min = 1000000;
        vector<vector<int>> out;
        for(int i = 0 ; i < arr.size()-1 ; i++)
        {
            if((arr[i+1] - arr[i]) < min )
            {
                min = arr[i+1] - arr[i];
                out.clear();
                out.push_back({arr[i] , arr[i+1]});
            }
             else if((arr[i+1] - arr[i]) == min )
            {
                out.push_back({arr[i] , arr[i+1]});
            }              
        }
        return out;
    }
