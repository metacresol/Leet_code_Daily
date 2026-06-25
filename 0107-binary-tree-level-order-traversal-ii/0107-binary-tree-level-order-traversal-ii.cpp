/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>vec;
      if(root == NULL)
            return vec;
      queue<TreeNode*>q;
      q.push(root);
      while(!q.empty()){
        int len=q.size();
        vector<int>v;
        for(int i=0;i<len;i++){
            TreeNode *curr=q.front();
            q.pop();
            v.push_back(curr->val);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);  
        }
        vec.push_back(v);
      } 
       reverse(vec.begin(),vec.end());
      return  vec;
    }
        
    
};