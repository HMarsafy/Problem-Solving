int countPoints(string rings) {
        if(rings.size() < 3) return 0 ;
        int out = 0 ;
        vector<int> red(10,0);
        vector<int> green(10,0);
        vector<int> blue(10,0);
        for(int i = 0 ; i < rings.size() ; i+=2)
        {
            int n = rings[i+1] -  '0';
            if(rings[i] == 'R') red[n] = 1 ;
            else if (rings[i] == 'G') green[n] = 1 ;
            else blue[n] = 1 ;
        }
        for(int i = 0 ; i <10 ; i++)
        {
            if(red[i] && green[i] && blue[i]) out++;
        }
        return out;
    }
