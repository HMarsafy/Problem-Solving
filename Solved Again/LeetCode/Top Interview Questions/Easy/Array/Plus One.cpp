vector<int> plusOne(vector<int>& digits) {
        int last = digits.size() - 1 ;
     if(digits[last] != 9) 
     {
         digits[last] ++ ;
         //return digits;
     }
        else 
        {
            int count  = 0 ;
            while(last >= 0 && (digits[last]) == 9  )
            {
                count++;
                last--;
            }
            if(count == digits.size())
            {
                vector<int> out((count+1),0);
                out[0] = 1 ;
                return out;
            }
            else
            {
                digits[last]++;
                while(count--)
                {
                    digits[++last] = 0;
                }
            }
            
        }
        return digits;
    
    }
