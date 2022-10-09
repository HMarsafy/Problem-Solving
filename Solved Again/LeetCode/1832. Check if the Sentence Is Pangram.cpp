bool checkIfPangram(string sentence) {
     vector<int> alpha(26,0);
     for(int i = 0 ; i <sentence.size() ; i++)
     {
         alpha[sentence[i]-'a']++;
     }
    for(int i = 0 ; i < alpha.size() ; i++)
    {
        if(! alpha[i]) return 0;
    }
        return 1;
    }
