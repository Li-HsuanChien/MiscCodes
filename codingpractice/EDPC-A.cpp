#include<bits/stdc++.h>
#define Min_n -1e5
using namespace std;



int findmin(vector<int>& nums, int N)
{
    int dp[N+2];
    
    for(int i = 0; i <= N+2; i++){
    	dp[i] = 1000000000;
	}
    
	dp[0] = 0;
	
	for(int i = 0; i <= N; i++){
		if(i + 1 < N) dp[i + 1] = min(dp[i + 1], (dp[i] + abs(nums[i + 1] - nums[i])));
		if(i + 2 < N) dp[i + 2] = min(dp[i + 2], (dp[i] + abs(nums[i + 2] - nums[i])));
	}
    return dp[N-1];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k;
    cin>>k;
    vector<int>nums(k,0);
    for(int j=0; j<nums.size(); j++)cin >> nums[j];
	cout << findmin(nums, k) << endl;
    return 0;
}
