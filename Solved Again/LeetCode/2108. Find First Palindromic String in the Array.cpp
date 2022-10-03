string firstPalindrome(vector<string>& words) {
        string out = "";
        for(int i = 0 ; i < words.size() ; i++)
        {
            int l = 0 ;
            int r = words[i].size() - 1 ;
            while(l <= r)
            {
                if(words[i][l] != words[i][r]) break;
                l++;
                r--;
                if(l > r) 
                {
                    out = words[i];
                    return out;
                }
            }
        }
        return out;
    }
