 vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        unordered_map<int,int> m3;
        unordered_set<int> s;
        vector<int> out;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            m1[nums1[i]]++;
            s.insert(nums1[i]);
        }
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            m2[nums2[i]]++;
            s.insert(nums2[i]);
        }
        for(int i = 0 ; i < nums3.size() ; i++)
        {
            m3[nums3[i]]++;
            s.insert(nums3[i]);
        }
        for(auto itr = s.begin() ; itr != s.end() ; itr++)
        {
            if((m1[*itr] >= 1 && m2[*itr] >= 1) || (m2[*itr] >= 1 &&              m3[*itr] >= 1) || (m1[*itr] >= 1 && m3[*itr] >= 1))
                {
                    out.push_back(*itr);                        
                }
        }
        return out;
        
    }
