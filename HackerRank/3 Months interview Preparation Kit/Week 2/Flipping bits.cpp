long flippingBits(long n) {
    string final_no="";
    while (n != 0)
    {
        if(n % 2 == 0)
            {
                final_no = "1" + final_no ;
            }
        else
            {
                final_no = "0" + final_no ;
            }
        n = n /2 ;
    }
    int no_of_1s = 32 - final_no.size();
    for(int i = 0 ; i < no_of_1s ; i++)
    {
        final_no ="1" + final_no;
    }
    long res = 0;
   for(int i = 31 ; i >= 0 ; i--)
    {
        if(final_no[31-i] == '1')
            {
                res = res + pow(2,i);
            }
    }
    return res;
}
