 string defangIPaddr(string address) {
        string out = "";
        string shape = "[.]";
        for(int i = 0 ; i < address.size() ; i++)
        {
            if(address[i] == '.')
                {
                    out += shape;
                }
            else
                {
                    out += address[i];
                }
        }
        
        return out;
    }
