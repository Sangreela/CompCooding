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
    ListNode* reverse(ListNode* head)
    {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while(temp)
        {
            ListNode* t = temp->next;
            temp->next = prev;
            prev = temp;
            temp = t;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next)
            return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* head2 = reverse(slow);
        ListNode* t1 = head;
        ListNode* t2 = head2;
        while(t1 && t2)
        {
            if(t1->val!=t2->val)
                return false;
            t1 = t1->next;
            t2 = t2->next;
        }
        //reverse(head2);
        return true;
    }
};