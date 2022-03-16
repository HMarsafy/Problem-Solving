 int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        vector<string> word;
        int first_letter = 0;
        for(int i = 0 ; i<text.size() ; i++)
            {
                if(text[i] == ' ')
                {
                    word.push_back(text.substr(first_letter,i-first_letter));
                    first_letter = i+1;
                }
            }
        word.push_back(text.substr(first_letter,text.size()-first_letter));
        for(int i = 0 ; i<word.size() ; i++)
        {
            cout<<word[i]<<endl;
            bool flag = true;
            for(int j = 0 ; j <brokenLetters.size() ; j++)
                {
                    if(word[i].find(brokenLetters[j]) != -1) {
                        flag = false;
                        break;}
                }
            if(flag) count++;
        }
        return count;
    }
