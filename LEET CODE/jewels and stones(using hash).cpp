class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map<int,int>mp;
        for(auto a:stones){
                mp[a]++;
        }
        for(auto b:jewels)
        {
            if(mp[b]>0)
            {
                count=count+mp[b];
            }
        }
        return count;
    }
};
