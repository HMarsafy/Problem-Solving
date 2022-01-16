    int xorOperation(int n, int start) {
        vector<int> v;
        int out = 0;
        for(int i = 0 ; i < n ; i++)
        {
            v.push_back((start+2*i));
        }
        for(int i = 0 ; i < n ; i++)
        {
            out = out ^ v[i];
        }
        return out;
    }
