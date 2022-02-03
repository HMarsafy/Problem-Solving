bool isValid(string s) {
        stack<char> t;
        char x;
        for(int i = 0 ; i<s.size() ; i++)
        {
            if(s[i] =='(' || s[i] == '{' || s[i] == '[')
            {
                t.push(s[i]);
                continue;
            }
            else
            {
                if(t.empty()) return false;
            }
            switch(s[i]){
                case ')':
                    x= t.top();
                    t.pop();
                    if(x=='{' || x=='[') return false;
                    break;
                case '}':
                    x= t.top();
                    t.pop();
                    if(x=='(' || x=='[') return false;
                    break;
                case ']':
                    x= t.top();
                    t.pop();
                    if(x=='{' || x=='(') return false;
                    break;
            }
        }
        return (t.empty());
    }
