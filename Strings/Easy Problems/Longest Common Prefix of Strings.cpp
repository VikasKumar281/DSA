class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
      string temp = "";
      int n = arr.size();
      
      if(arr.size() == 0){
          return temp;
      }
      
      sort(arr.begin(),arr.end());
    
      string s1 = arr[0]; 
      string s2 = arr[n-1];
      int i =0;
      while(i < s1.size() && i < s2.size() && s1[i] == s2[i]){
        temp.push_back(s1[i]);
        i++;
      }
      
      return temp;
    }
};
