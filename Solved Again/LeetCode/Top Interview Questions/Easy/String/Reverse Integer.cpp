int reverse(int x) {
        string num = "";
        int y = x;
        x = abs(x);
        while(x != 0)
        {
            num+=((x % 10) + 48);
            x/=10;
        }
      long long out = 0 ;
      for(int i =0 ; i<num.size() ; i++)
      { 
          long temp = (num[i]-48 ) * pow(10,num.size()-(i+1));
          out+=temp;
      }
        if(out >= pow(-2,31) && out <= pow(2,31)-1 && y < 0) return -out;
        if(out >= pow(-2,31) && out <= pow(2,31)-1 && y > 0 ) return out;
        return 0;
    }
