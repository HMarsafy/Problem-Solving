bool halvesAreAlike(string s) {
        int sumA = 0;
        int sumB = 0;
       for(int i = 0 ; i < s.size()/2 ; i++)
       {
           if(s[i] =='a'||s[i] =='e'||s[i] == 'i' ||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
               sumA++;
       }
        for(int i = s.size()/2 ; i < s.size() ; i++)
       {
           if(s[i] =='a'||s[i] =='e'||s[i] == 'i' ||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
               sumB++;
       }
        return sumA == sumB;
    }
