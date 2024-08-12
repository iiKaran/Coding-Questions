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
    pair<int,int> solve(TreeNode * root){
        if(root== nullptr) return {0,0}; 

        pair<int , int> ld = solve(root->left); 
        pair<int , int> rd = solve(root->right); 

        int c1 = ld.first ; 
        int c2 = rd.first ; 
        int c3 = ld.second+ rd.second +1 ; 

        pair<int, int> ans ; 
        ans.first = max(c3 ,max(c1,c2)); 
        ans.second = max(ld.second,  rd.second)+1; 
        return ans ;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0 ; 

        return solve(root).first-1 ; 
    }
};