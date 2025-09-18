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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0){
            return head;
        }

        ListNode* temp = head;
        int length = 0;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }

        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;

        temp = head;
        if(k >= length){
            k = k % length;
        }
       
        int left = length - k;

        for(int i =1;i<left;i++){
            temp = temp->next;
        }
  
        tail->next = temp->next;
        temp->next = NULL;

        while (tail->next != NULL) {
            tail = tail->next;
        }
        tail->next = head;

        ListNode* result = dummy->next;
        delete dummy;

        return result;  
    }
};
