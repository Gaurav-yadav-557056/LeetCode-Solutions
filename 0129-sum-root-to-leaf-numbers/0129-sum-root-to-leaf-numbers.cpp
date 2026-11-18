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
        int sumNumbers(TreeNode* root) {
            if(root==nullptr)
            return 0;
            int sum=0;
           stack<pair<TreeNode*, int>>st;
           st.push({root, 0 });
           while(!st.empty()){
           pair<TreeNode*, int> p=st.top();
           st.pop();
           TreeNode* node=p.first;
           int cn=p.second;
           cn=cn*10 + node->val;
           if(node->left==nullptr && node->right==nullptr)
           sum+=cn;
           if(node->left!=nullptr)
           st.push({node->left, cn});
           if(node->right!=nullptr)
           st.push({node->right, cn});
           }
           return sum;
    }
};