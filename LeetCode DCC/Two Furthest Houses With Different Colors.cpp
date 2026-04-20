class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();

        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            if(colors[i] != colors[0]){
                maxi = max(maxi,i);
            }
            if(colors[i] != colors[n-1]){
                maxi = max(maxi,n-1-i);
            }
        }         
       
       return maxi;
    }
};






class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();

        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                if(colors[i] != colors[j]){
                    maxi = max(maxi,abs(j-i));
                }
            }
        }         
       
       return maxi;
    }
};
