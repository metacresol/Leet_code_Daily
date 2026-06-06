class Solution {
public:
    void sortColors(vector<int>& nums) {
        int right=nums.size()-1;
        int mid=0,left=0;
        while(mid<=right){
            if(nums[mid]==1)
                mid++;
            else if(nums[mid]==0){
                swap(nums[mid],nums[left]);
                mid++,left++;
            }
            else{
                swap(nums[mid],nums[right]);
                right--;
            }
                
            

        }
    }
};