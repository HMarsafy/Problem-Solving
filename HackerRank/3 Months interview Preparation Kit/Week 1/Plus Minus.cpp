void plusMinus(vector<int> arr) {
    float postive = 0;
    float negative = 0;
    float zeros = 0;
    for(int i = 0 ; i< arr.size() ; i++)
    {
        if(arr[i] > 0) postive++;
        else if (arr[i] < 0) negative++;
        else zeros++;
    }
    postive  = postive/arr.size();
    negative/=arr.size();
    zeros /=arr.size();
    printf("%6f\n",postive);
    printf("%6f\n",negative);
    printf("%6f\n",zeros);

}
