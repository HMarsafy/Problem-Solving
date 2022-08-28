   int finalValueAfterOperations(vector<string>& operations) {
        int x = 0 ; 
        for(int i = 0 ; i< operations.size() ; i++)
        {
            int index;
            index = operations[i].find('+');
            if(index != string::npos) x++;
            else x--;
        }
        return x;
    }


/////////////////////////////////////// Learned   //////////////////////////////////////////////////////
/*
Find function in string : it returns the index of first occuerence of the desired string
                          else it returns string::npos pointer instead.
syntax : 
          string s = "Hello World";
          int index;
          index = s.find("World")
          
          so it returns index = 6;
          if it is not found index = string::npos.
          
*/
