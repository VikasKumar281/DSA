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
