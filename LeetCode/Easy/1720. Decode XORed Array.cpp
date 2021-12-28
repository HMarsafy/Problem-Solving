  vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;
        arr.push_back(first);
        for(int i = 0 ; i < encoded.size() ; i++)
            {
                arr.push_back(arr[arr.size()-1] ^ encoded[i]);
            }
        return arr;
    }
