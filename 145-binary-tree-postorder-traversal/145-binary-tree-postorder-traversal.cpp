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
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root)   return {};
        vector<int> postorder;
        stack<TreeNode*> stack1;
        stack<TreeNode*> stack2;
        stack1.push(root);
        while( !stack1.empty() ){
            TreeNode* temp = stack1.top();
            stack1.pop();
            stack2.push(temp);
            if(temp->left)
                stack1.push(temp->left);
            if(temp->right)
                stack1.push(temp->right);
        }
        
        while( !stack2.empty() ){
            postorder.push_back(stack2.top()->val);
            stack2.pop();
        }
        return postorder;  
    }
};