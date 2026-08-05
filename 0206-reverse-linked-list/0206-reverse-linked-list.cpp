/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *t1 = head;
        if(!head)
            return head;
        ListNode *t2 = head->next;

        while(t2)
        {
            ListNode *temp = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = temp;
        }
        head->next = NULL;
        head = t1;
        return head;
    }
};