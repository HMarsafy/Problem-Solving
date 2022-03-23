 string removeDuplicates(string s) {
     stack<char> m;
     string out = "";
     for(int i = 0 ; i<s.size() ; i++)
     {
         if(m.empty())
             m.push(s[i]);
         else
         {
             if(m.top() == s[i])
                 m.pop();
             else
                 m.push(s[i]);
         }
     }
        
        while(!m.empty())
        {
            out = m.top() + out;
            m.pop();
        }
        return out;
    }
