    bool judgeCircle(string moves) {
        int updown = 0;
        int leftright=0;
        for(int i = 0 ; i<moves.size() ; i++)
        {
            if(moves[i] == 'U') updown++;
            else if(moves[i] == 'D') updown--;
            else if(moves[i] == 'L') leftright++;
            else leftright--;
        }
        if(updown == 0 && leftright == 0) return 1;
        return 0;
        
    }
