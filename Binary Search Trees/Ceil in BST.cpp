class Solution {
  public:
    int findCeil(Node* root, int x) {
        int ceil = -1;
        
        while(root){
          if(root->data == x){
            ceil = root->data;
            return ceil;
          }
          else if(x > root->data){
             root = root ->right;
          }
        
          else{
             ceil = root->data;
             root = root ->left;
          }
        }
      return ceil;        
    }
};
