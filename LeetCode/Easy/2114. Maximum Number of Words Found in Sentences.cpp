int mostWordsFound(vector<string>& sentences) {
        int max = 0 ;
        for(int i = 0 ; i < sentences.size() ; i++)
        {
            int count = 0;
            for(int j = 0 ; j < sentences[i].size() ; j++)
            {
                if(sentences[i][j] == ' ') count++;
            }
            count++;
            if(count > max) max = count;
        }
        return max;
    }
