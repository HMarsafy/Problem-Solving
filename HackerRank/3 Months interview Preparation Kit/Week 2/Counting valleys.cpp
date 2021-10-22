int countingValleys(int steps, string path) {
    int sea_level = 0 ;
    int no_of_v = 0 ; 
    for(int i = 0 ; i < path.size() ; i++)
        {
            if(path[i] == 'D') sea_level--;
            if(path[i] == 'U') sea_level++;
            while(sea_level < 0)
                {
                    i++;
                    if(path[i] == 'D') sea_level--;
                    if(path[i] == 'U') sea_level++;
                    if(sea_level == 0) no_of_v++;
                }
        } 
    return no_of_v;
}
