/*You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list = new ListNode(0);
        ListNode* temp = list;
        int a;
        int b;
        while(list1!=nullptr || list2!=nullptr){
            if(list1!=nullptr){ 
                a = list1->val;
                if(list2!=nullptr){ //case 1: list1 exists, list2 exists
                    b = list2->val;
                    if(a<b){
                        list->next = new ListNode(a);
                        list = list->next;
                        list1 = list1->next;
                    }
                    if(b<=a){
                        list->next = new ListNode(b);
                        list = list->next;
                        list2 = list2->next;
                    }
                }
                else{ //case 2: list1 exists, list2 doesn't exist
                    list->next = new ListNode(a);
                    list = list->next;
                    list1 = list1->next;
                }
                
            }
            else if(list2!=nullptr){ //case 3: list1 doesn't exist, list2 exists
                b = list2->val;
                list->next = new ListNode(b);
                list = list->next;
                list2 = list2->next;
            }
            
        }
        return temp->next;
    }
};
