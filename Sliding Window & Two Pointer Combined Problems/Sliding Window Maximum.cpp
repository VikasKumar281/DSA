class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        deque<int> dq;

        for(int i =0;i<n;i++){

            //Step1 - remove the max elements from front which are out of window size.
            while(!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }

            //Step2 - we maintain the deque in descending order------------>
            while(!dq.empty() && nums[i] > nums[dq.back()]){
                dq.pop_back();
            }

            //Step3 ---->
            dq.push_back(i);


            //Step4 -------->
            if(i >= k-1){
                //Only when the window size first gets equal or greater than k
                ans.push_back(nums[dq.front()]); //front will have the max element (dequeue is maintained in descending order).
            }

        }

        return ans;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(k)






class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0;i<=n-k;i++){
          int maxi = INT_MIN;
          for(int j = i;j<i+k;j++){
            maxi = max(maxi, nums[j]); 
          }
          ans.push_back(maxi);
        }

        return ans;
    }
};
//T.C. = O(N * K)
//S.C. =>
  // Aux Space	O(1)
  // Output Space	O(n)
