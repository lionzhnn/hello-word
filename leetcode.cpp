//21. Merge Two Sorted Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *temp1,*temp2;
        ListNode *temp=new ListNode(0);
        temp1=l1;
        temp2=l2;
        ListNode *temp3=temp;
        if(!l1) return l2;
        if(!l2) return l1;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val < temp2->val)
            {
                temp->next=new ListNode(temp1->val);
                temp1=temp1->next;
            }
            else
            {
                temp->next=new ListNode(temp2->val);
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        if(temp1)
        {
            temp->next=temp1;
        }
        if(temp2)
        {
            temp->next=temp2;
        }
        temp=temp3;
        temp=temp->next;
        delete temp3;
        return temp;
    }
};