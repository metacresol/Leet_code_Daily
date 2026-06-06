class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int ans=0;
        while(l<r){
            int wd=r-l;
            int ht=min(height[l],height[r]);
            int curr_ans=wd*ht;
            ans=max(ans,curr_ans);
            height[r]<height[l]? r--:l++;
        }
        return ans;
    }

};