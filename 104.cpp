#include<iostream>
using namespace std;
struct TreeNode {
      	int val;
      	TreeNode *left=NULL;
    	TreeNode *right=NULL;
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
    	if(root == NULL)
    	{
    		return 0;
		}
		int maxf=1,maxr=1;
        depth(root,1,maxf,maxr);
        return maxf>maxr?maxf:maxr;
    }
    int depth(TreeNode* root, int dep,int& maxf,int& maxr)
    {
    	if(root->left!=NULL)
    	{
//    		cout<<"asd"<<endl;
    		if(dep+1>maxf)
    		{
    			
    			maxf=dep+1;
//    			cout<<maxf;
			}
			depth(root->left,dep+1,maxf,maxr);

		}
		if(root->right!=NULL)
    	{
    		
    		if(dep+1>maxr)
    		{
    			maxr=dep+1;
//    			cout<<maxr;
			}
			depth(root->right,dep+1,maxf,maxr);	
		}
		return 0;
	}
};
int main()
{
	TreeNode test1,test2,test3;
	test1.val=1;test2.val=2;test3.val=3;
	test1.left=&test2;test1.right=&test3;
	Solution test;
	
	cout << test.maxDepth(&test1);
}
