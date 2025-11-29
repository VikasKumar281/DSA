class Solution {
  public:
    int majorityElement(vector<int>& arr) {
       int n = arr.size();
       map<int,int> freq;
       
       for(int i =0;i<n;i++){
           freq[arr[i]]++;
       }
       int maxiIndex = 0;
       for(int i =1;i<n;i++){
           if(freq[arr[i]] > freq[arr[maxiIndex]]){
               maxiIndex = i;
           }
       }
       
       if(freq[arr[maxiIndex]] > n/2){
           return arr[maxiIndex];
       }
       else
         return -1;  
    }
};   




class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1, count = 0;
        for (int num : arr) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        count = 0;
        for (int num : arr) {
            if (num == candidate)
                count++;
        }

        return (count > arr.size() / 2) ? candidate : -1;
    }
};
