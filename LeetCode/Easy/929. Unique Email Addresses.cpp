 int numUniqueEmails(vector<string>& emails) {
       unordered_map<string,int> m;
        for(int i = 0 ; i<emails.size() ; i++)
        {
            string temp="";
            for(int j = 0 ; j < emails[i].size() ; j++)
            {
                if(emails[i][j] == '.') continue;
                else if(emails[i][j] == '+')
                {
                    int ind = emails[i].find('@');
                    temp = temp + emails[i].substr(ind,(emails[i].size()-ind));
                    m[temp]++;
                    cout<<temp<<endl;
                    break;
                }
                else if(emails[i][j] == '@')
                {
                    temp = temp + emails[i].substr(j,(emails[i].size()-j));
                    m[temp]++;
                    cout<<temp<<endl;
                    break;
                }
                else
                {
                    temp = temp + emails[i][j];
                }
            }
        }
        return m.size();
    }
