class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //    int len=nums.size();
        //    for(int i=0;i<len;i++){
        //     nums[i]=nums[i]*nums[i];
        //    }
        // sort(nums.begin(), nums.end());
        //     return nums;
        vector<int> vec(nums.size());
        int l = 0;
        int e = nums.size() - 1;
        int k = nums.size() - 1;
        while (l <= e) {
            if (nums[l] * nums[l] > nums[e] * nums[e]) {
                vec[k] = nums[l] * nums[l];
                l++;
            } else {
                vec[k] = nums[e] * nums[e];
                e--;
            }
            k--;
        }
        return vec;
    }
};