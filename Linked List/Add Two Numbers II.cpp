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
    ListNode* reverseList(ListNode* head){
        ListNode* curr = head;
        ListNode* forward = NULL;
        ListNode* prev = NULL;

        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward; 
        }

        return prev;
    }

    ListNode* Helper(ListNode* l3 , ListNode*l4){
        ListNode* dummyHead = new ListNode(0);
        ListNode* tail = dummyHead;

        int carry =0;

        while(l3 || l4 || carry){
           int add = carry;
           if(l3){
             add = add + l3->val;
             l3 = l3->next;
           }

           if(l4){
            add = add + l4->val;
            l4 = l4->next;
           }

           carry = add /10;
           ListNode* l5 = new ListNode(add % 10);
           tail->next = l5;
           tail = tail->next;
        }
    
        ListNode* result = dummyHead->next;
        delete dummyHead;
        
        return result;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = reverseList(l1);
        ListNode* l4 = reverseList(l2);

        ListNode* result = Helper(l3,l4);

        return reverseList(result);
    }
};


// T.C = O(Max(N,M)) = S.C.
