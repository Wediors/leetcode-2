#include<iostream>
using namespace std;
struct TreeNode {
     int val=1;
     TreeNode *left=NULL;
     TreeNode *right=NULL;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    	
       if(p==NULL&&q==NULL)
       {
       		return true;
	   }
	   else if(p!=NULL&&q!=NULL)
	   {
	   	   if(p->val==q->val)
			{
				return isSameTree(p->left,q->left)*isSameTree(p->right,q->right);
			}
			else{
				return false;
			}
	   }
	   else{
	   	return false;
	   }
    }
};
int main()
{
	TreeNode test1,test2;
	Solution test;
	cout << test.isSameTree(&test1,&test2);
}
