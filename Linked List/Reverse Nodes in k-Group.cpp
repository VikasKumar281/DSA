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
private:
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    } 

    ListNode* getKthNode(ListNode* temp , int k){
       k--;
       while(temp!=NULL && k>0){
          k--;
          temp = temp->next;
        }
       return temp;
    }    

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k == 1){
            return head;
        }

        ListNode* nextNode = NULL; 
        ListNode* prevNode = NULL;

        ListNode* temp = head;
        while(temp != NULL){
            ListNode* KthNode = getKthNode(temp , k);
            if(KthNode == NULL){
                if(prevNode){
                  prevNode->next = temp;
                }
                break;
            }

            nextNode = KthNode->next;
            KthNode->next = NULL; 

            reverse(temp);
            if(temp == head){
                head = KthNode;
            }
            else{
                prevNode->next = KthNode;
            }
            prevNode = temp;
            temp = nextNode;
        } 
      return head;
    }
};

//T.C. = O(N)+O(N) = O(N)
//S.C. = O(1)
