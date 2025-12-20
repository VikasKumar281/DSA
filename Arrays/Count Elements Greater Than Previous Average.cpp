int countResponseTimeRegressions(vector<int> responseTimes) {
    int n = responseTimes.size();
    if (n <= 1) {
      return 0;
    }

    int count = 0;
    long long sum = responseTimes[0];

    for (int i = 1; i < n; i++) {
        double avg = (double)sum / i;
        if (responseTimes[i] > avg) {
            count++;
        }
        sum += responseTimes[i];
    }
    return count;
}
