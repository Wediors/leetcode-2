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
        if(head==NULL) return NULL;
        ListNode* pointer = head;
        while(pointer->next!=NULL)
        {
        	if(pointer->next->val==val)
        	{
        		pointer->next=pointer->next->next;
			}
			else{
				pointer=pointer->next;
			}
		}
		if(head->val==val)
		{
			head=head->next;
		}
        return head;
    }
    
};
