class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;int countZero=0;int maxlen=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                countZero++;
            }
            while(countZero > k){
                if(nums[left]==0)
                    countZero--;
                left++;
            }
            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};