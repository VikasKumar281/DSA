// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

// OPTIMIZED =>
class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int,int>>ans;
        if(!head){
            return ans;
        }
        
        Node* left = head;
        Node* right = head;
        while(right->next){
            right = right->next;
        }
        
        while(left != right && right->next!=left){
            int sum = left->data + right->data;
            if(sum == target){
                ans.push_back(make_pair(left->data,right->data));
                left = left->next;
                right = right->prev;
            }
            
            else if(sum < target){
                left = left->next;
            }
            else{
                right = right->prev;
            }
        }
        
        return ans;
    }
};



// class Solution {
//   public:
//     vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
//         vector<pair<int,int>>ans;
//         if(!head){
//             return ans;
//         }
        
//         Node* temp1 = head;
//         Node* temp2 = head;
//         while(temp1){
//             temp2 = head;
//             while(temp2){
//                 int sum = temp1->data + temp2->data;
//                 if(sum == target && temp1->data < temp2->data){
//                     ans.push_back(make_pair(temp1->data,temp2->data));
//                 }
//                 temp2 = temp2->next;
//             }
//             temp1 = temp1->next;
//         }
        
//         return ans;
//     }
// };
