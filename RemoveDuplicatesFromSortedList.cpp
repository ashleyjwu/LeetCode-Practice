class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        if(head->next==nullptr) return head;
      
        unordered_set<int> allInts;
        ListNode* list = new ListNode(0);
        ListNode* temp = list;
        while(head != nullptr){
            if(allInts.find(head->val) == allInts.end()){ //value hasnt appeared yet
                allInts.insert(head->val); 
                list->next = new ListNode(head->val);
                list = list->next;
            }
            head = head->next;
        }

        return temp->next;
    }
};
