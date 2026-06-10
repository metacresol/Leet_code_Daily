class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int>hash(101,0);int ans=0;
        for(int val:nums){
            ans+=hash[val];
            hash[val]++;
        }
        return ans;
    }
};