int calPoints(vector<string>& ops) {
        int count = 0;
        vector<int> n;
        for(int i = 0 ; i< ops.size() ; i++)
            {
            if(isdigit(ops[i][0]) || ops[i][0] == '-' )
                {
                    if(isdigit(ops[i][0]))
                    {
                    int x = stoi(ops[i]);
                    n.push_back(x);
                    }
                    else
                    {
                        string num = ops[i].substr(1,ops[i].size()-1);
                        int x = stoi(ops[i]);
                        n.push_back(x);
                        
                    }
                }
            
              else if(ops[i] == "+")
                    n.push_back(n[n.size()-1] + n[n.size()-2]);
            
              else if (ops[i] == "C")
                    n.pop_back();
            
              else
                    n.push_back((n[n.size()-1])*2);}
              
            
        for(int i = 0 ; i<n.size() ; i++)
                count+=n[i];
            
        return count;
    }
