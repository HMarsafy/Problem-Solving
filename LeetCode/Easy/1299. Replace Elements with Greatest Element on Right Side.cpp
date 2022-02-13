 vector<int> replaceElements(vector<int>& arr) {
        vector<int> out(arr.size());
        for(int i = 0 ; i<arr.size()-1 ; i++)
        {
            int max = arr[i+1];
            for(int j = i+1 ; j<arr.size() ; j++)
            {
                if(arr[j] > max) max = arr[j];
            }
            out[i] = max;
        }
        out[out.size()-1] = -1;
        return out;
    }
