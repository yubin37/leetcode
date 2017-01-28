/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * }
 */
int maxDepth(struct TreeNode* root) {
	if (NULL == root)
		return 0;
	int left_depth = 1 + maxDepth(root->left);
	int right_depth = 1 + maxDepth(root->right);
	return left_depth > right_depth ? left_depth : right_depth;
}
