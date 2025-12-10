/* The Node is defined
  /* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:

    int countCommon(Node* a, Node* b) {
        int cnt = 0;
        while (a && b && a->data == b->data) {
            cnt++;
            a = a->next;
            b = b->next;
        }
        return cnt;
    }

    int maxPalindrome(Node *head) {
        Node* prev = NULL;
        Node* curr = head;
        int result = 0;

        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;


            int odd = 2 * countCommon(prev, next) + 1;
            result = max(result, odd);

            int even = 2 * countCommon(curr, next);
            result = max(result, even);

            prev = curr;
            curr = next;
        }

        return result;
    }
};
