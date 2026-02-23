class Solution {
  public:
    vector<string> sortRecords(vector<string>& employee, vector<int>& salary) {
        int n1 = employee.size();
        int n2 = salary.size();
        
        vector<pair<int,string>> arr;
        
        for(int i =0;i<n1;i++){
            arr.push_back({salary[i], employee[i]});
        }
        
        sort(arr.begin(),arr.end() , [](auto &a, auto &b){ 
           if(a.first == b.first){
               return a.second < b.second; 
           }
           return a.first < b.first;
        });
        
        vector<string> result;
        
        for(auto &p : arr){
            result.push_back(p.second);
        }
        
        
        return result;
    }
};
//T.C. => O(n log n)
//S.C. => O(n)




class Solution {
  public:
    vector<string> sortRecords(vector<string>& employee, vector<int>& salary) {
        int n = employee.size();
        
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                
                if(salary[j] > salary[j + 1]) {
                    swap(salary[j], salary[j + 1]);
                    swap(employee[j], employee[j + 1]);
                }
                else if(salary[j] == salary[j + 1] && employee[j] > employee[j + 1]) {
                    swap(employee[j], employee[j + 1]);
                }
            }
        }
        
        return employee;
    }
};
//T.C. = O(N ^2)
