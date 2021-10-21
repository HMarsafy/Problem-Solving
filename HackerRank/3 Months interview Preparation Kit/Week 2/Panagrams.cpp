string pangrams(string s) {
   vector <bool> alpa(26,0);
   for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] != ' ')
            {
                alpa[tolower(s[i]) - 97] = true;
            }
    }
    for(int i = 0 ; i< 26 ; i++)
        {
            if(alpa[i] == 0) return "not pangram";
        }
        return "pangram";
}
