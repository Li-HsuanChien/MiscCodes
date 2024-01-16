#include<bits/stdc++.h>
using namespace std;

int main(){
	int C, K;
	cin >> C >> K;
	
	int arr[C];
	
	for(int i = 0; i < C; i++) cin >> arr[i];
	
	int dp[C];
	
	for(int i = 0; i < C; i++) dp[i] = 10000000;
	
	dp[0] = 0;
	
	for(int i = 0; i < C; i++){
		for(int j = 1; j < min(K + 1, C - i); j++){
			dp[i + j] = min(dp[i + j], (dp[i] + abs(arr[i + j] - arr[i])));
		} 
	}
		
	cout << dp[C-1];
	
	return 0;
}
