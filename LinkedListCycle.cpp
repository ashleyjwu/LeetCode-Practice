/*Given head, the head of a linked list, determine if the linked list has a cycle in it.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. 
Return true if there is a cycle in the linked list. Otherwise, return false.*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *test = head;
        while(test!=nullptr && head!=nullptr){
            head = head->next;
            if(test==head){
                return true;
            }
            if(head!=nullptr){
                head = head->next;
            }
            test = test->next;
        }
        return false;
    }
};
