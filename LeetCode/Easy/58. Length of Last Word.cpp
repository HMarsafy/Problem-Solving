 int lengthOfLastWord(string s) {
        int count = 0;
        int index_of_last_char;
        for(int i = s.size()-1 ; i>= 0 ; i--)
        {
            if(isalpha(s[i])){
                index_of_last_char = i;
                break;
            }
        }
        while(isalpha(s[index_of_last_char--]))
        {
            count++; 
            if (index_of_last_char <0 ) break;
        }
        return count;
    }
