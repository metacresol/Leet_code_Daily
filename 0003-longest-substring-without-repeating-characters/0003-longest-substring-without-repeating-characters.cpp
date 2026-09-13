class Solution {
public:
    int lengthOfLongestSubstring(string nums) {
        unordered_set<char>st;
        int left=0,maxLen=0;
        for(int right=0;right<nums.size();right++){
            while(st.find(nums[right])!=st.end()){
                st.erase(nums[left]);
                left++;
            }
            st.insert(nums[right]);
            maxLen=max(maxLen,right-left+1);
        }
    return maxLen;
    }
};