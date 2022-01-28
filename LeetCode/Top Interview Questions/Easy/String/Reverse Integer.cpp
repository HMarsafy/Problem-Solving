    int reverse(int x) {
    long long xx=x;
    bool neg = false;
    if(x < 0) {xx*=-1; neg = true;}
    string s = to_string(xx);
    string new_s="";
    for(int i = s.size()-1 ; i>=0 ; i--)
    {
        new_s+=s[i];
    }
    long long new_x = stoll(new_s);
    if(neg)
     {
        new_x*=-1;
        if(new_x < pow(-2,31)) return 0;
        else{return new_x;}
     }
     else{
        if(new_x > pow(2,31)-1) return 0;
        
     }

        return new_x;
    }
