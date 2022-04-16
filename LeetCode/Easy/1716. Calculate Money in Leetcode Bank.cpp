 int totalMoney(int n) {
        int total = 0 ;
        total = total + (28 * (n/7));
        int mul = 0 ;
        int lop = 0;
        while(lop <= ((n/7)-1))
        {
            mul = mul + lop ;
            lop ++;
        }
        total = total + (7 * mul);
        int start = n/7 + 1 ;
        int mod = n % 7 ;
        while(mod--)
        {
            total = total + start;
            start++;
        }
        
        return total;
       
    }
