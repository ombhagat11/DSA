class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || isSymmetricHelp(root->left, root->right);
    }

    bool isSymmetricHelp(TreeNode* left, TreeNode* right) {

        // Both NULL → symmetric
        // One NULL → not symmetric
        if (left == NULL || right == NULL) {
            return left == right;
        }

        // Values must be same
        if (left->val != right->val) {
            return false;
        }

        // Mirror comparison
        return isSymmetricHelp(left->left, right->right) &&
               isSymmetricHelp(left->right, right->left);
    }
};