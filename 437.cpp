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
    int pathSum(TreeNode* root, int sum) {
    
        if(root == NULL)
        {
        	return 0;
		}
		int pre=pre+root->val;
		return dfs(root,sum)+pathSum(root->left,sum)+pathSum(root->right,sum);	
    }
    int dfs(TreeNode *root,int sum)
    {
    	int res=0;
    	if(!root) return 0;
    	else{
    		if(sum-root->val==0)
    			res++;

			res+=dfs(root->left,sum-root->val)+dfs(root->right,sum-root->val);
			return res;
		}
	}
};
