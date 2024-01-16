#include<bits/stdc++.h>
#define Min_n -1e5
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        vector<int>dp = {0};
        int o = -10000;
        for(int t=1;t<=k;t++){
            int e;
            cin>>e;
            dp[t]=max(dp[t-1],0)+e;
            if(dp[t]>o) o=dp[t];
        }
        cout << o <<"\n";
    }
}
