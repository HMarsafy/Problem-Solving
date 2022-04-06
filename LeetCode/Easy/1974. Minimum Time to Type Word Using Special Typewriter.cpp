int minTimeToType(string word) {
        int pointer = 0;
        int time = 0;
        for(int i = 0 ; i <word.size() ; i++)
        {
            int letter_location = word[i] - 97 ;
            int diff = abs( pointer - letter_location );
            if(diff > 13)
            {
                time = time + (26 - diff) + 1;
                
            }
            else
            {
                time = time + diff + 1 ;
            }
            pointer = letter_location;
        }
        return time;
    }
