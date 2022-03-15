string reverseOnlyLetters(string s) {
       stack<char> m;
       string o ="";
       for(int i = 0 ; i<s.size() ;i++)
       {
           if(isalpha(s[i]))
           {
               m.push(s[i]);
           }
       }
         for(int i = 0 ; i<s.size() ;i++)
       {
           if(!isalpha(s[i]))
               o+=s[i];
            else
            {
                o+= m.top(); 
                m.pop();
            }
                
       }
        return o;
    }
