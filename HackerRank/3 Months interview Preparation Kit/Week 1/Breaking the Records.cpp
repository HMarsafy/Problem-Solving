vector<int> breakingRecords(vector<int> scores)
    {
        vector<int> Result(2,0);
        int min = scores[0];
        int max = scores[0];
        for(int i = 1 ; i < scores.size() ; i++)
            {
                if(scores[i] < min){ Result[1]++; min = scores[i];}
                else if(scores[i] > max) { Result[0]++; max = scores[i];}
            }
            return Result;
    }
