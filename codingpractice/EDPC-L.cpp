#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int s[3005];
long long dp[3005][3005];

int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	
	int nums;
	cin >> nums;
	
	for(int i = 0; i < nums; i++){
		 cin >> s[i];
		 dp[i][i] = s[i];
	}
	for(int i = 1; i < nums; i++){
		for(int j = 0; i + j < nums; j++){
			dp[j][i+j] = max(s[j] - dp[j+1][i+j], s[i+j] - dp[j][i+j-1]);
		}
	}
	cout << dp[0][nums-1] << "\n";
	return 0;
}
