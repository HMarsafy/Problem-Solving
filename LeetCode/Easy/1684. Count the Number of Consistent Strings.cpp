 int countConsistentStrings(string allowed, vector<string>& words) {
        int out = 0;
        bool flag = false;
        vector<int> all(26,0);
     for(int i = 0 ; i< allowed.size() ; i++)
     {
         all[allowed[i] - 'a'] = 1;
     }
      for(int i = 0 ; i< words.size() ; i++)
     {
          for(int j = 0 ; j< words[i].size() ; j++)
          {
                if(all[words[i][j] - 'a']) flag = true;
                else
                {
                    flag = false;
                    break;
                }
          }
          if(flag)
          {
              out++;
          }
     }
    return out;
    }
