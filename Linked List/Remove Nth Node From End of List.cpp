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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 1;
        while(temp->next != NULL){
            count++;
            temp = temp->next;
        }

       int k = count - n + 1;
       int count2 = 1;
       ListNode* temp1 = head;
       ListNode* prev = NULL;

       while(temp1 != NULL){
          if(count2 == k){
              if(prev == NULL) {
                head = head->next;
              }
              else {
                prev->next = temp1->next;
              }
               delete temp1; 
               break;
            }
           count2++;
           prev = temp1;
           temp1 = temp1->next;
        }
        return head;
    }
};

// Time Complexity = O(N)
// Space Complexity = O(1)
