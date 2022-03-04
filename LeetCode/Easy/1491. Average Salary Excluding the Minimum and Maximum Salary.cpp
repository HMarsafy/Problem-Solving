 double average(vector<int>& salary) {
        double average = 0 ;
        int min = 1000000;
        int max = 1000;
        for(int i = 0 ; i < salary.size() ; i++)
        {
            if(salary[i] > max) max = salary[i];
            if(salary[i] < min) min = salary[i];
        }
        for(int i = 0 ; i < salary.size() ; i++)
        {
           if(salary [i] == max || salary[i] == min) continue;
           average+=salary[i];
        }
        return average / (salary.size()-2);
    }
