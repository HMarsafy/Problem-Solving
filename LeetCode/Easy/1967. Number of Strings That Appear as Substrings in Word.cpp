   int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i = 0 ; i<patterns.size() ; i++)
        {
            int size = patterns[i].size();
            for(int j = 0 ; (j+size)<=word.size();j++)
            {
                string s = word.substr(j,size);
                if(patterns[i] == s)
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
