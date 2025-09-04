/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        int count = 0;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                count = 1;
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                Node* temp = slow->next;
                while(temp != slow){
                    count++;
                    temp = temp -> next;
                }
                break;
            }
        }
        return count;
    }
};

// Time Complexity = O(N) + O(N) + O(L) = O(N)
// Space Complexity = O(1)
