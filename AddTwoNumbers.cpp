/*You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(0);
        ListNode* list = ans;
        int carry = 0;
        int sum;
        while(l1 != nullptr || l2 != nullptr){
            sum = 0;
            if(l1!=nullptr){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=nullptr){
                sum += l2->val;
                l2 = l2->next;
            }
            sum+=carry; //add 1 to sum if carried over
            carry = sum/10; //see if you need to carry to the next number
            if(sum>9)
                sum = sum%10; 
            ans->val = sum;
            if((l1 != nullptr || l2 != nullptr) || carry != 0){
                ans->next = new ListNode();
                ans = ans->next;
            }
        }
        if(carry!=0){
            ans->val = carry;
        }
        return list;
    }
};
