 string interpret(string command) {
        string out = "";
        for(int i = 0 ; i < command.size() ; i++)
        {
            if(command[i] == '(')
            {
                if(command[i+1] == ')'){ out += 'o';  i+=1; }
                else { out += "al"; i+=3; }
            }
            else
            {
                out += 'G';
            }
        }
        return out;
    }
