vector<int> reverseArray(vector<int> a) {
     vector<int> out;
     for(int i = a.size()-1 ; i >=0 ; i--)
     {
         out.push_back(a[i]);
     }
     return out;
}
