bool is_vowel(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return 1;
        return 0;
    }
    bool halvesAreAlike(string s) {
        int av = 0 ;
        int bv = 0;
        string a = s.substr(0,s.size()/2);
        string b = s.substr(s.size()/2,s.size()/2);
        for(int i = 0 ; i < s.size()/2 ; i++)
        {
            if(is_vowel(tolower(a[i]))) av++;
            if(is_vowel(tolower(b[i]))) bv++;
        }
        return av==bv;
    }
