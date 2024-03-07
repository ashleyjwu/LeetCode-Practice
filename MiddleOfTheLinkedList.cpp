class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* current = head;
        int total = 0;
        int middleIndex = 0;
        while(current!=nullptr){
            total++;
            current = current->next;
        }
        middleIndex = total/2;
        ListNode* middle = new ListNode();;
        for(int i = 0; i<middleIndex; i++){
            head = head->next;
        }
        middle = head;
        return middle;
    }
};
