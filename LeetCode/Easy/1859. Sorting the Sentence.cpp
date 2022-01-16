 string sortSentence(string s) {
        string output ="";
        int words = 1;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i] == ' ')words++;
        }
        vector<string> order(words,"");
        int count = 0;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(isdigit(s[i]))
            {
                int n = s[i] - 48;
                string st ="";
                st = s.substr((i-count),count);
                order[n-1] = st;
            }
            else if(s[i] == ' ')
            {count = 0;continue; }
            else
            {
                count++;
            }
        }
        for(int i = 0 ; i <order.size() ; i++)
        {
            if(i == order.size() -1)
            {
                output+=order[i];
                break;
            }
            output +=order[i] +" ";
        }
        return output;
