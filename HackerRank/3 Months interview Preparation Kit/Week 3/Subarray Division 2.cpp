int birthday(vector<int> s, int d, int m) 
{
    int count = 0 ;
    for(int i = 0 ; i <s.size() ; i++)
        {
            int mo = m ;
            int sum = 0 ;
            int pass = i;
            while(mo --)
                {
                    sum+=s[pass++];
                }
            if(sum == d) count++;
        }
    return count;
}
