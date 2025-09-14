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
    ListNode* merge(ListNode* l1 , ListNode* l2){
       ListNode dummy(0);
       ListNode* tail = &dummy;

        while(l1 && l2){
            if(l1->val <= l2->val){
                tail->next = l1;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }
      
        tail->next = (l1 ? l1:l2);
        return dummy.next;
    }

    ListNode* getmid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next; 
        } 

        return slow;
    }

    ListNode* mergeSort(ListNode* head){
         if(head == NULL || head->next == NULL){
            return head;
        }

        ListNode* mid = getmid(head);

        ListNode* right = mid->next;
        mid->next = nullptr;
        ListNode* left = head; 

        left = mergeSort(left);
        right = mergeSort(right);
        
        return merge(left , right);
    }    
public:
    ListNode* sortList(ListNode* head) {
        return mergeSort(head);   
    }
};
// Time Complexity = O(N logN)
// Space Complexity = O(logn)







// class Solution {
// private:
//     ListNode* createLinkedListfromArray(vector<int> &result){
//         ListNode* newHead = new ListNode(result[0]);
//         ListNode* dummy = newHead;
//         int n = result.size();
//         for(int i = 1;i<n;i++){
//            ListNode* dummyHead = new ListNode(result[i]);
//            dummy->next = dummyHead;
//            dummy = dummy->next;
//         }

//         return newHead;
//     }    
// public:
//     ListNode* sortList(ListNode* head) {
//         if(!head){
//             return NULL;
//         }
//         vector<int>ans;

//         ListNode* temp = head;
//         while(temp){
//           ans.push_back(temp->val);
//           temp = temp->next;
//         }

//         sort(ans.begin(), ans.end());
//         ListNode* temp2 = createLinkedListfromArray(ans);

//         return temp2;
//     }
// };

// Time Complexity = O(N) + O(N logN) + O(N)
// Space Complexity = O(N)
