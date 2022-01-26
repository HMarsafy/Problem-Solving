 void reverseString(vector<char>& s) {
        string w ="";
        for(int i = s.size()-1 ; i >=0 ; i--)
        {
            w+=s[i];
        }
        for(int i = 0 ; i <w.size() ; i++)
        {
            s[i] = w[i];
        }
    }
/////////////////////////////////////// ANOTHER SOLUTION ////////////////////////////////////////

 void reverseString(vector<char>& s) {
    int j = 0 ;
    int i = s.size()-1;
    char temp;
    for(int itr = 0 ; itr<s.size()/2 ; itr++)
    {
        temp = s[j];
        s[j++] = s[i];
        s[i--] = temp;
    }
    }
