class Solution {
public:
    int solve(TreeNode *root)
    {
        if(root == NULL)
            return 0;
        int l = solve(root->left), r = solve(root->right);
        if(l == -1 || r == -1)
            return -1;
        if(abs(l - r) > 1)
            return -1;
        return max(l,r) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        return solve(root) != -1;
    }
};