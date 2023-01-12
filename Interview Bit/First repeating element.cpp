int Solution::solve(vector<int> &A) {
    unordered_map<int,int>map;
    for(int a:A){
        map[a]++;
    }
    for(int a:A)
    {
        if(map[a]>1){
            return a;
        }
    }
    return -1;
}
