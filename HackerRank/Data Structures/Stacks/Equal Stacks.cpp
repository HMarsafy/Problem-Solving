int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
    if(h1.size() == 0 || h2.size() == 0 || h3.size() == 0) return 0  ;
    int first = 0 ;
    int second = 0 ;
    int third = 0 ;
    for(int i = 0 ; i < h1.size() ; i++)
    {
        first += h1[i];
    }
    for(int i = 0 ; i < h2.size() ; i++)
    {
        second += h2[i];
    }
    for(int i = 0 ; i < h3.size() ; i++)
    {
        third += h3[i];
    }
    int first_idx = 0;
    int second_idx = 0;
    int third_idx = 0;
    while(first != second || second != third)
    {
        if(first >= second && first >= third )
        {
            first -= h1[first_idx++];
        }
        else if(second >= first && second >= third )
        {
            second -= h2[second_idx++];
        }
        else if(third >= second && third >= first)
        {
            third -= h3[third_idx++];
        }
    }

    return first;
}
