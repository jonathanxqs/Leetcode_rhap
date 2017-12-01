/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    vector<vector<int>> rt_ans;  

    void buildVector(TreeNode *root, int depth)
    {
        if(root == NULL) return;
        if(rt_ans.size() == depth)  //new level
            rt_ans.push_back(vector<int>());
        
        rt_ans[depth].push_back(root->val);
        buildVector(root->left, depth + 1);
        buildVector(root->right, depth + 1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        buildVector(root,0);
        return rt_ans;
    }
};