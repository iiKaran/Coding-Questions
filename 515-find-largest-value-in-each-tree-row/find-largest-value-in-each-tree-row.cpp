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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans ; 
        if(root == NULL)
        return ans ; 
        
        queue<TreeNode*> q ; 
        q.push(root); 
        while(!q.empty())
        {
            int size = q.size(); 
            int maxi = INT_MIN ; 
            for( int i =0;i <size;i++){
                TreeNode * tp = q.front(); 
                maxi = max(maxi, tp->val); 
                q.pop(); 
                if(tp->left)
                q.push(tp->left); 
                if(tp->right)
                q.push(tp->right); 
            }
            ans.push_back(maxi);
        }
        return ans ;
    }
};