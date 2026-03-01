class Solution {
public:
    int minPartitions(string n) {
        char maxCh = *max_element(begin(n), end(n));

        return maxCh - '0';
    }
};
