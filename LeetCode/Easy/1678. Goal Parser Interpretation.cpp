 string interpret(string command) {
        string output ="";
        for(int i = 0 ; i < command.size() ; i++)
        {
            if(command[i] == 'G')
            {
                output+='G';
            }
            else
            {
                if(command[i+1] == 'a')
                {
                    output+="al";
                    i+=3;
                }
                else
                {
                    output+='o';
                    i+=1;
                }
            }
        }
        return output;
    }
