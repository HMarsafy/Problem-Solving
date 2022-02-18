bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        int first = 0;
        int second = 0;
        int target=0;
        for(int i = 0 ; i< firstWord.size() ; i++)
        {
            char c = firstWord[i];
            first+=((c-97)*pow(10,firstWord.size()-(i+1)));
        }
        
        for(int i = 0 ; i< secondWord.size() ; i++)
        {
            char c = secondWord[i];
            second+= ((c-97)*pow(10,secondWord.size()-(i+1)));
        }
        for(int i = 0 ; i< targetWord.size() ; i++)
        {
            char c = targetWord[i];
            target+=((c-97)*pow(10,targetWord.size()-(i+1)));
        }
        if(target == (first+second)) return true;
        return false;
    }
