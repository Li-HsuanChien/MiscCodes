#include <iostream>
using namespace std;
const int MAXN = 3005;
long long int dp[MAXN][MAXN];
int s[MAXN];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, test;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> s[i];
        dp[i][i] = s[i];
    }
    
    cout << dp[0][n-1] << '\n';
    return 0;
}
