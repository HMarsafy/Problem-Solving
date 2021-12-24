 string restoreString(string s, vector<int>& indices) {
     string copy = s ;
     for(int i = 0 ; i < copy.size() ; i++)
     {
         s[indices[i]] = copy[i];
     }
        return s;
    }
