int sockMerchant(int n, vector<int> ar) {

    unordered_map<int, int> count;
    int pairs = 0;
    for(int i = 0 ; i < ar.size() ; i++)
        {
            count[ar[i]]++;
        }
    for(auto itr = count.begin() ; itr != count.end() ; itr++)
        {
            pairs = pairs + (itr -> second)/2;
        }
        return pairs;
}
