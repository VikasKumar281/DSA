class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        int n = landStartTime.size();
        int m = waterStartTime.size();

        int result = INT_MAX;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                int land                = landStartTime[i] + landDuration[i];
                int pehleLand_FirWater  = max(land, waterStartTime[j]) + waterDuration[j];
                result                  = min(result, pehleLand_FirWater);

                int water              = waterStartTime[j] + waterDuration[j];
                int pehleWater_FirLand = max(water, landStartTime[i]) + landDuration[i];

                result = min(result, pehleWater_FirLand);
            }
        }

        return result;
    }
};
