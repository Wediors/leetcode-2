#include<iostream>
using namespace std;
struct ListNode {
     int val=1;
     ListNode *next=NULL;
     ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        
        if(head->next->next==NULL)
		{
			if(head->next==val)
			{
				head->next=NULL;
			}
		 }
		 else{
		 	if(head->next==val)
			{
				head->next=head->next->next;
			}
			
		 }
		if(head->val==val)
        {
        	if(head->next!=NULL)
       		 {
        	head->val=head->next->val;
        	head->next=head->next->next;
        	
			}
			
		}
		return removeElements(head->next,val);
    }
    ListNode*()
};
