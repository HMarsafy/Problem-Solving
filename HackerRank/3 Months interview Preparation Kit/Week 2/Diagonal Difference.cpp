int diagonalDifference(vector<vector<int>> arr) {
    int first_diagonal = 0;
    int second_diagonal = 0;
    int n = arr.size();
    for(int i = 0 ; i< n ; i++)
    {
        first_diagonal+=arr[i][i];
    }
    for(int i = 0 ; i< n ; i++)
    {
        second_diagonal+=arr[i][(n-1-i)];
    }
    return abs(first_diagonal - second_diagonal);
}
