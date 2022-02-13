 bool squareIsWhite(string s) {
    int num = s[1] - 48;
    s[0] = tolower(s[0]);
    if((num % 2 ==0) && (s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g'))
        {
            return true;
        }
    else if ((num % 2 !=0) && (s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g'))
        {
            return false;
        }
    else if ((num % 2 ==0) && (s[0]=='b' || s[0]=='d' || s[0]=='f' || s[0]=='h'))
        {
            return false;
        }	
        return true;
        }
