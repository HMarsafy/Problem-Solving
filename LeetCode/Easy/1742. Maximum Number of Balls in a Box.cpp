   int countBalls(int lowLimit, int highLimit) {
        int max = 0;
        unordered_map<int,int> no_of_balls;
        int n = lowLimit;
        while(n <= highLimit )
        {
            int num = n ;
            int box = 0;
            while(num != 0)
            {
                box+=(num%10);
                num/=10;
            }
            no_of_balls[box]++;
            n++;
        }
        for(auto itr = no_of_balls.begin() ; itr != no_of_balls.end() ; itr++)
        {
            if(itr->second > max) max = itr->second;
        }
        return max;
    }
