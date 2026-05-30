class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        bool zeroPresent = false;
        
        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                zeroPresent = true;
                break;
            }
        }
        
        if(!zeroPresent){
            return -1;
        }
        
        int operations = 0;
        int i = 0;
        
        while(i < n){
            if(arr[i]!= 0){
                operations++;
                
                while(i < n && arr[i] != 0){
                    i++;
                }
            } 
            else{
                i++;
            }
        }
        
        return operations;
    }
};
