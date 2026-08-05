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
    ListNode* reverselist(ListNode* head)
    {
        ListNode *t1 = nullptr;
        ListNode *t2 = head;
        while(t2)
        {
            ListNode *temp = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = temp;
        }
        return t1;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *start = head;
        ListNode *mid = slow->next;
        mid = reverselist(mid);
        while(mid)
        {
            if(start->val!=mid->val)
            {
                reverselist(slow->next);
                return false;
            }
            start = start->next;
            mid = mid->next;
        }
        reverselist(slow->next);
        return true;


    }
};