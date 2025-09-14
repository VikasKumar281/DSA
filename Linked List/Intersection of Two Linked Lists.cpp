/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    int getLength(ListNode* head){
        ListNode* temp = head;
        int count =0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        return count;
    }    

    ListNode* traverse(ListNode* l1 , ListNode* l2){
       ListNode* intersectVal = NULL;
       while(l1 && l2){
        if(l1 == l2){
           return l1;
        }
        l1 = l1->next;
        l2 = l2->next;
       }

      return NULL;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA = getLength(headA);
        int lengthB = getLength(headB);

        
        while(lengthA > lengthB){
           headA = headA->next;
           lengthA--;
        }
        while(lengthB > lengthA){
            headB = headB->next;
            lengthB--;
        }

        ListNode* intersectVal = traverse(headA , headB);
        
        return intersectVal;

    }
};
