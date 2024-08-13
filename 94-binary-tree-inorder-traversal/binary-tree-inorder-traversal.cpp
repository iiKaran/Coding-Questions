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
#include<bits/stdc++.h> 
using namespace std ; 

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st ; 
        vector<int> order ; 

        if(root== NULL)
        return order ; 

        TreeNode * curr = root ; 
        while( curr != nullptr || !st.empty()){
            while(curr != nullptr){
            st.push(curr); 
            curr = curr->left ; 
            }
                if(st.empty())
                break; 

                order.push_back(st.top()->val); 
                curr = st.top(); 
                st.pop();
                curr = curr->right ; 
        }
    
        return order ; 
    }
};