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
