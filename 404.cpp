#include<iostream>
using namespace std;

struct TreeNode {
     int val;
    TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        if(!root) return 0;
        if(root->left!=NULL)
        {
        	if((root->left->left==NULL)&&(root->left->right==NULL))
			{
				sum+=root->left->val;
			 } 
		}
        sum+=sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
		return sum;
    }
};
