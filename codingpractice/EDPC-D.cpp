#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, w, c, k;
	cin >> n >> w;
	int dp[n+1][w+1];
	
	for(int i = 0; i <= w; i++) dp[0][i] = 0;
	
	for(int i = 1; i <= n; i++){
		cin >> c >> k;
		for(int j = 0; j < c; j++) dp[i][j] = dp[i-1][j];
		for(int j = c; j <= w; j++){
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-c] + k);
		}
	}
	cout << dp[n][w];
}
