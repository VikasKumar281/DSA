// User function Template for C++
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1 = a.size();
        int n2 = b.size();
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        vector<int> arr;
        
        int i =0, j=0;
        while(i<n1 && j<n2){
            if(a[i] < b[j]){
                if(arr.empty() || arr.back() != a[i]){
                  arr.push_back(a[i]);
                }
                i++;
            }
            else if(a[i] > b[j]){
                if(arr.empty() || arr.back() != b[j]){
                  arr.push_back(b[j]);
                }
                j++;
            }
            else {
                if(arr.empty() || arr.back() != a[i]){
                    arr.push_back(a[i]);
                }
                i++;
                j++;
            }            
        }
        
        while(i<n1){
            if(arr.empty() || arr.back() != a[i]){
              arr.push_back(a[i]);
            }
            i++;
        }
        
        while(j < n2){
            if(arr.empty() || arr.back() != b[j]){
              arr.push_back(b[j]);
            }
            j++;
        }
        
        return arr;
    }
};
