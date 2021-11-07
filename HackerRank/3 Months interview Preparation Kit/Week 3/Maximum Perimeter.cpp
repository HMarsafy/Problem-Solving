vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    vector<vector<int>> answers;
    sort(sticks.begin(),sticks.end());
    for(int i = 0 ; i < sticks.size()-2 ; i++)
        {
            if(    ((sticks[i] + sticks[i+1]) > sticks[i+2])
                && ((sticks[i+2] + sticks[i+1]) > sticks[i])
                && ((sticks[i+2] + sticks[i]) > sticks[i+1])
            )
                {
                    answers.push_back({sticks[i],sticks[i+1],sticks[i+2]});
                }
        }
    if(answers.empty()) return {-1};
    vector<int> perimeters;
    for(int i = 0 ; i < answers.size() ; i++)
        {
            perimeters.push_back(answers[i][0]+answers[i][1]+answers[i][2]);
        }
    int max_peri = 0;
    int id = 0;
    for(int i = 0 ; i < perimeters.size() ; i++)
        {
            if(perimeters[i] > max_peri)
             {
                 max_peri=perimeters[i];
                 id = i;
             }
        }
        return answers[id];
}
