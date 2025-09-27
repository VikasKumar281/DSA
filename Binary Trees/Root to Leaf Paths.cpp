/*

Definition for Binary Tree Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  private:
    void getPath(Node* root ,vector<int> &arr, vector<vector<int>> &result){
        if(!root){
            return;
        }
        
        arr.push_back(root->data);
        
        if(!root->left && !root->right){
            result.push_back(arr);
        }
        else{
            getPath(root->left , arr , result);
             getPath(root->right , arr , result);
        }
        
        arr.pop_back();
    }
  public:
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> result;
        
        if(!root){
            return result;
        }
        vector<int> arr;
        getPath(root ,arr, result);
        
        return result;
        
    }
};
