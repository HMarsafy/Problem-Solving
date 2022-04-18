vector<int> getMax(vector<string> operations) {
    vector<int> ans;
    stack<pair<int,int>> s;
    int max = -1000 ;
    for(int i = 0 ; i < operations.size() ; i++)
    {
        char c = operations[i][0];
        if(c == '1')
            {
              string s_no = operations[i].substr(2,operations[i].size()-2);
              int i_no = stoi(s_no);
              if(i_no >= max) max = i_no;
              s.push({i_no,max});
              
            }
        else if (c == '2')
            {
             s.pop();
             if(s.empty()) max = -1000;
             else
                max = s.top().second ;
            }
        else
            {
                ans.push_back(s.top().second);
            }
    }
    return ans;
}
