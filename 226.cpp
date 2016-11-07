#include<iostream>
using namespace std;
struct TreeNode {
    int val=1;
    TreeNode *left=NULL;
    TreeNode *right=NULL;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}; 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL)
        {
        	return 0;
		}
		else{
			TreeNode* temp;
			temp = root->left;
			root->left=root->right;
			root->right=temp;
			invertTree(root->left);
			invertTree(root->right);
		}
		return root;
    }
};
int main()
{
	
}

