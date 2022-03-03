 int hammingDistance(int x, int y) {
        int count = 0;
        string X = "";
        string Y = "";
        while(x != 0)
        {
            int d = x % 2;
            (d == 1) ? (X = '1' + X ) : (X= '0' + X);
            x /= 2;
        }
        while(y != 0)
        {
            int d = y % 2;
            (d == 1) ? (Y = '1' + Y ) : (Y= '0' + Y);
            y /= 2;
        }
        int dif;
        bool flag = false;
     if(X.size() > Y.size())
     {
         dif = X.size() - Y.size();
         flag = true;
     }
    else
        {
            dif = Y.size() - X.size();
        }
    if(flag)
    {
        while(dif--)
        {
            Y = '0' + Y;
        }
    }
        else
        {
            while(dif--)
            {
                X = '0' + X;
            }
        }
        for(int i = 0 ; i<X.size() ; i++)
        {
            if(X[i] != Y[i]) count++;
        }
        return count;
    }
