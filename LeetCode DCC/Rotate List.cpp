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
        if(head == NULL || head->next == NULL || k == 0){
            return head;
        }

        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }

        k = k % count;
        if(k == 0){
            return head;
        }

        int l = count - k;
        temp = head;

        ListNode *newHead = NULL;
        while(l > 1){
            temp = temp->next;
            l--;
        }
        
        newHead = temp->next;
        ListNode* temp2 = newHead;

        while(temp2->next != NULL){
            temp2 = temp2->next;
        }

        temp2->next = head;
        temp->next = NULL;

        return newHead;
    }
};
