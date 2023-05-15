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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* ptr1=head;
        ListNode* ptr2=head;
        ListNode* ptr3=head;
        
        int temp=k;
        while(ptr3){
            if(temp<=0){
                ptr1=ptr1->next;
            }
            if(temp>1){
                ptr2=ptr2->next;
            }
            ptr3=ptr3->next;
            temp--;
        }
        swap(ptr1->val,ptr2->val);
        return head;
    }
};