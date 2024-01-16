#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, m;
	while(cin >> n){
		int dp[n+1][101];
		for(int i = 0; i <= 100; i++) dp[0][i] = 0;
		for(int i = 1; i <= n; ++i) {
	
        	int w, p;
        	cin >> w >> p;
        	for(int j = 0; j < w; ++j) {
            	dp[i][j] = dp[i-1][j]; 
        	}
        	for(int j = w; j <= 100; ++j) { 
            	dp[i][j] = max(dp[i-1][j], dp[i-1][j-w] + p); 
        	}
    	}
    	cout << dp[n][100] << "\n";
	}
}
