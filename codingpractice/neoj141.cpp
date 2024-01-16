#include<bits/stdc++.h>
#define Min_n -1e5
using namespace std;

int findMaxsum(vector<int>& nums, int N)
{
    int dp[N][2];
    if(N==1) return nums[0];
    dp[0][0] = 0;
    dp[0][1] = nums[0];
    for(int i = 1; i < N; i++){
		dp[i][1] = nums[i] + dp[i-1][0];
		dp[i][0] = max(dp[i - 1][1],
					   dp[i - 1][0]);
	}
	return max(dp[N - 1][0], dp[N - 1][1]); 
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int>nums(k,0);
        for(int j=0; j<nums.size(); j++){
        	cin >> nums[j];
		}
		cout << findMaxsum(nums, k) << endl;	
    }	
    return 0;
}
