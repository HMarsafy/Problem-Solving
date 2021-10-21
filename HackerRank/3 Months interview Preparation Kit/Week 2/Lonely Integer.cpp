int lonelyinteger(vector<int> a) {
    int answer = 0 ;
    for(int i =0 ; i < a.size() ; i++)
        {
            answer = answer ^ a[i];
        }
        return answer;
}
