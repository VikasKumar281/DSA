class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;

        for(char ch : moves) {
            if(ch == 'U'){
                y++;
            }
            else if(ch == 'D'){
                y--;
            }
            else if(ch == 'L'){
                x--;
            }
            else if(ch == 'R'){
                x++;
            }
        }

        return (x == 0 && y == 0);
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    bool judgeCircle(string moves) {
        int count1 = 0;
        int count2 = 0;
        
        for(char ch: moves){
            if(ch == 'U'){
                count1++;
            }
            if(ch == 'L'){
                count2++;
            }
            if(ch == 'D'){
                count1--;
            }
            if(ch == 'R'){
                count2--;
            }
        }

        if(count1 == 0 && count2 == 0){
            return true;
        }

        return false;
    }
};
// Time Complexity: O(n)
// Space Complexity: O(1)
