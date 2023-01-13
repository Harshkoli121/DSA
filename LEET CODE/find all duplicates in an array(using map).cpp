class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        unordered_map<int,int>ar;

        for(int a:nums)
        {
            ar[a]++;
        }
        for(auto a:ar)
        {
            if(a.second==2)
            {
                arr.push_back(a.first);
            }
            
        }
        return arr;
    }
};
