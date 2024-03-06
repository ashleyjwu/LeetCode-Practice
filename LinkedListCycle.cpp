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
