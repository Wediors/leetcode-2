#include<iostream>
using namespace std;
struct ListNode {
     int val=1;
     ListNode *next=NULL;
     ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
