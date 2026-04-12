class Solution {
  public:
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        vector<int> ans;

        for(int num : arr){
            if(num >= k) continue;

            if(num < 10) continue;

            int temp = num;
            bool ok = true;

            int prev = temp % 10;
            temp /= 10;

            while(temp > 0){
                int curr = temp % 10;
                if(abs(curr - prev) != 1){
                    ok = false;
                    break;
                }
                prev = curr;
                temp /= 10;
            }

            if(ok) ans.push_back(num);
        }

        return ans;
    }
};
