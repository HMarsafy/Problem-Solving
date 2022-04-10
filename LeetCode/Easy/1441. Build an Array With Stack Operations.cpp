vector<string> buildArray(vector<int>& target, int n) {
        vector<string> tar;
        int list = 1;
        for(int i = 0 ; i< target.size() ; i++)
        {
            if(target[i] == list)
            {
                tar.push_back("Push");
            }
            else
            {
                tar.push_back("Push");
                tar.push_back("Pop");
                i--;
            }
            list++;
        }
        return tar;
    }
