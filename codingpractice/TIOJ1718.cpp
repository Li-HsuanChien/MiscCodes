#include <bits/stdc++.h>
using namespace std;

int main(){
	int space, place, place_count;
	int p, w;
	int dp[10001][51];
	cin >> space >> place >> place_count;
	for(int i = 0; i <= space; i++){
		for(int j = 0; j < 51; j++) dp[i][j] = 0;
	}
	for(int i = 0; i < place; i++){
		for(int j = 0; j < place_count; j++){
			cin >> p >> w;
			for(int l = space; l >= p; l--){
				dp[l][i] = max(dp[l-p][i-1] + w, dp[l][i]);
			} 
		} 
	}
	int ans = 0;
	for(int k = space; k > 0; k--){
		ans = max(ans, dp[k][place - 1]);	
	} 
	cout << ans;
	
	return 0; 
}
