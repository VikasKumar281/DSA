/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> topView(Node *root) {
        
        vector<int>result;
        if(root == NULL){
            return result;
        }
        
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root , 0));
        
        while(!q.empty()){
            pair<Node* , int>front = q.front();
            q.pop();
            
            Node * frontNode = front.first;
            int hd = front.second;
           
            if(mp.find(hd) == mp.end()){
                mp[hd] = frontNode->data;
            }
            
            if(frontNode -> left){
                q.push(make_pair(frontNode ->left,hd-1));
            }
            if(frontNode -> right){
                q.push(make_pair(frontNode ->right,hd+1));
            }
           
        }
         for(auto i: mp){
            result.push_back(i.second);
        }
       
        
        return result;
        
    }
};


//  T.C. = O(NlogN)
// S.C. = O(N)
