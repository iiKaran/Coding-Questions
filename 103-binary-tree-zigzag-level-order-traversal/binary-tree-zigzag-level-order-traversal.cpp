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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        
         vector<vector<int>> ans ; 
        if(root == NULL) return ans ; 
         queue<TreeNode*> q ; 

         q.push(root); 
         bool left = true ; 
         
         while(!q.empty()){
            
            int size= q.size(); 
            vector<int> tmp ; 
            for(int i =0; i < size; i++){
                TreeNode * t =q.front(); 
                 q.pop(); 
                 if(t)
                 tmp.push_back(t->val);
                 
                 if(t && t->left)
                 q.push(t->left); 
                 if(t && t->right)
                 q.push(t->right);
            }
            
            if(!left){
                reverse(tmp.begin(), tmp.end()); 

            }
            ans.push_back(tmp);
            left = !left ; 

         }
        
         return ans ; 
    }
};