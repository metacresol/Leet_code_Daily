class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack<int>st;
        vector<int>rs(arr.size(),0);
        vector<int>ls(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&& arr[st.top()]>=arr[i]){
                st.pop();
            }
        if(st.empty())
            rs[i]=arr.size();
        else
            rs[i]=st.top();
        st.push(i);

        }
        while(!st.empty())
            st.pop();
         for(int i=0;i<arr.size();i++){
            while(!st.empty()&& arr[st.top()]>=arr[i]){
                st.pop();
            }
        if(st.empty())
            ls[i]=-1;
        else
            ls[i]=st.top();
        st.push(i);

        }
        int ans=0;
        for(int i=0;i<arr.size();i++){
            int width=rs[i]-ls[i]-1;
            int area=arr[i]*width;
            ans=max(area,ans);
        }
        return ans;
    }
};