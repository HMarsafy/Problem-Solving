void miniMaxSum(vector<int> arr) {
    int min = arr[0];
    int max = arr[0];
    for(int i = 1 ; i< arr.size() ; i++)
        {
            if(arr[i] < min) min = arr[i];
            if(arr[i] > max) max = arr[i];
        }
    int count_min = 0;
    int count_max = 0;
    unsigned int o_max=0 ;
    unsigned int o_min=0;
    for(int i = 0 ; i<arr.size() ; i++)
    {
        if(arr[i] > min || (arr[i] ==min && count_min >0)) o_max+=arr[i];
        else if (arr[i] == min && count_min ==0) count_min++;
        if(arr[i] < max || (arr[i] ==max && count_max >0)) o_min+=arr[i];
        else if (arr[i] == max && count_max ==0) count_max++;
    }
    cout<<o_min<<" "<<o_max;
}
