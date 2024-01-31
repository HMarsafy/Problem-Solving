class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> a;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            m[nums[i]]=i;
        }
        for(int i = 0 ; i< nums.size() ; i++)
        {
            int goal = target-nums[i];
            if(m[goal] && m[goal] != i)
            {
                a.push_back(i);
                a.push_back(m[goal]);
                break;
            }
        }
        return a;
    }
};
