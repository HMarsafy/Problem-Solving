vector<int> matchingStrings(vector<string> strings, vector<string> queries)
    {
        unordered_map<string, int> count;
        for(int i = 0 ; i< strings.size() ; i++)
            {
               count[strings[i]]++;
            }
            vector<int> Result;
            for(int i =0 ; i <queries.size() ; i++)
                {
                    Result.push_back(count[queries[i]]);
                }
        return Result;
    }
