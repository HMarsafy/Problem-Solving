int findComplement(int num) {
        string binary="";
        while(num != 0)
        {
            if(num % 2)
            binary = '1' + binary;
            else binary = '0'+binary;
            num/=2;
        }
        string s="";
        for(int i = 0 ; i< binary.size() ; i++)
        {
            if(binary[i] == '0') s+='1';
            else
                s+='0';
        }
        int out = 0;
        int p = s.size()-1;
        for(int i = 0 ; i<s.size() ; i++)
        {
           if(s[i] == '1')
           {
               out = out + pow(2,p--);
           }
            else
                p--;
        }
        return out;
    }
