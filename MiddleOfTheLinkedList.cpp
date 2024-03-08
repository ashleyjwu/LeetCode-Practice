/*Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr && fast->next!=nullptr){
            fast = fast->next->next;
            slow = slow->next;

        }
        return slow;
    }
};
