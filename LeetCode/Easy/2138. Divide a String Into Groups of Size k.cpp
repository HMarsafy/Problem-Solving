vector<string> divideString(string s, int k, char fill) {
        vector<string> out;
        for(int i = 0 ; i+k < s.size() ; i+=k)
        {
             string temp = s.substr(i,k);
             out.push_back(temp);
        }
        int carry = s.size() - (out.size()*k);
        int no = k - carry;
        string last = s.substr((out.size()*k),carry);
        while(no--)
        {
            last+=fill;
        }
        out.push_back(last);
        return out;
    }
