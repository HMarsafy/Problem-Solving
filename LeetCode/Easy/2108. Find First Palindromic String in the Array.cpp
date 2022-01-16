 string firstPalindrome(vector<string>& words) {
        for(int i = 0 ; i < words.size() ; i++)
        {
            string s = words[i];
            if(words[i].size() == 1) return words[i];
            int lst_indx = words[i].size()-1;
            bool flag = false;
            for(int j = 0 ; j < words[i].size()/2 ; j++)
            {
                if(words[i][j] == words[i][lst_indx--])
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            if(flag) return words[i];
        }
        return "";
    }
