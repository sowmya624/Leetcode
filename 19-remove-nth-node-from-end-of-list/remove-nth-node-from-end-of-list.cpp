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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        
        // Move the fast pointer `n` steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast is null, it means we need to remove the head of the list
        if (!fast) return head->next;
        
        // Move both pointers until fast reaches the end of the list
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Skip the target node
        slow->next = slow->next->next;
        
        return head;
    }
};