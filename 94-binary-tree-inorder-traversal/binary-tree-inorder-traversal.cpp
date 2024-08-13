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

        st.push(root); 
        TreeNode * curr = root ; 
        while(!st.empty()){
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
        order.pop_back(); 
        
        return order ; 
    }
};