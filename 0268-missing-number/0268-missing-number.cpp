class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int Tsum=0,sum=0;
        int n=nums.size();
        Tsum=n*(n+1)/2;
        for(int val: nums)
            sum+=val;
        return Tsum-sum;
        
     }
};