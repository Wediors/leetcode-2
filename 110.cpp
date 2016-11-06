#include<iostream>
#include<cmath>
using namespace std;
struct TreeNode {
      	int val=1;
      	TreeNode *left=NULL;
    	TreeNode *right=NULL;
};
class Solution {
public:
    bool isBalanced(TreeNode* root) {
    	if(root==NULL)
    	{
    		return true;
		}
        if(abs(maxDepth(root->left)-maxDepth(root->right))>1)
        {
        	return false;
		}
		else{
			return (isBalanced(root->left))*isBalanced(root->right);
		}
    }
    int maxDepth(TreeNode* root) {
		if(root==NULL)
		{
			return 0;
		}
 	return max(maxDepth(root->left),maxDepth(root->right))+1;   
	}
};

int main()
{
	
}
