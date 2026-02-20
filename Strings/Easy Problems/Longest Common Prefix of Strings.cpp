// USING VERTICAL SCANNING METHOD -------------------------------------------------------------------------------------------------->
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i =0;i<strs[0].size();i++){
            char ch = strs[0][i];

            bool match = true;

            for(int j = 1;j<strs.size();j++){
                if(strs[j].size() < i || ch != strs[j][i]){
                    match = false;
                    break;
                }
            }
            if(match == false){
                break;
            }
            else{
                ans.push_back(ch);
            }
        }

        return ans;
    }

};
//Time Complexity => O(N × M)



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
//Time Complexity => O(NlogN) 
      
      return temp;
    }
};
