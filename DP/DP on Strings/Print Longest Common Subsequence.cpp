// BOTTOM UP APPROACH ------------------------------------------------>
string findLCS(int n, int m,string &s1, string &s2){
	vector<vector<int>> dp(m+1, vector<int>(n+1));
    
	// First row and First column will have 0 value --->
	for(int row =0;row < m+1;row++){
		// Col 1 will have 0.
		dp[row][0] = 0;
	}
	for(int col =0;col < n+1;col++){
		// Row 1 will have 0.
		dp[0][col] = 0;
	}


	for(int i =1;i<m+1;i++){
		for(int j = 1;j< n+1;j++){
			if(s1[i-1] == s2[j-1]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}
			else{
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
	}


	int i = m;
	int j = n;
    
	string LCS = "";
	while(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1]){
			// Diagonally Up
			LCS.push_back(s1[i-1]);
			i--;
			j--;
		 }
		else{
			if(dp[i-1][j] > dp[i][j-1]){
				i--;
			}
			else{
				//  dp[i-1][j] < dp[i][j-1]
				j--;
			}
		}
	}

	reverse(begin(LCS), end(LCS));

	return LCS;
}
