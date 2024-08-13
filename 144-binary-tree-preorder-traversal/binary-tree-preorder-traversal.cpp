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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root== NULL)
        return {}; 
        
        vector<int> order ; 
        stack<TreeNode * > st ; 
        TreeNode * curr = root ; 

        while(!st.empty() || curr){
            // can process node in stack or node pointed by the curr 
            
            while(curr!= NULL){
                st.push(curr); 
                order.push_back(curr->val); 
                curr = curr->left ; 
            }
            if(st.empty())
            break; 

            curr = st.top(); 
            curr = curr->right ; 
            st.pop(); 

        }
        return order ; 
    }
};