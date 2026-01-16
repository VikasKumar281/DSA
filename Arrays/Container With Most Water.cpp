class Solution {
public:
    int maxArea(vector<int>& height) {
       int n = height.size();

       int left = 0, right = n-1;
       int max_area =0;
       while(left < right){
          int h = min(height[left],height[right]);
          int width = right - left;
          max_area = max(max_area,h * width);

          if(height[left] < height[right]){
            left++;
          }
          else{
            right--;
          }
       }  
      
      return max_area;
    }
};


class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int l = 0, r = n - 1;
        long long ans = 0;

        while(l < r){
            long long area = (long long)(r - l) * min(arr[l], arr[r]);
            ans = max(ans, area);
            if(arr[l] < arr[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
