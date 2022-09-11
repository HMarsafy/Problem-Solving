 string restoreString(string s, vector<int>& indices) {
        string out = s;
        int index = 0;
        for(int i = 0 ; i< indices.size() ; i++)
        {
            out [indices[i]] = s[index++]; 
        }
        return out;
    }
