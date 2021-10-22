int marsExploration(string s) {
    int changed_letters = 0 ;
    for(int j = 0 ; j < s.size() / 3 ; j++)
        {
            static int i = 0;
            if(s[i++] != 'S') { changed_letters++;}
            if(s[i++] != 'O') { changed_letters++;}
            if(s[i++] != 'S') { changed_letters++;}
        }
        return changed_letters;
}
