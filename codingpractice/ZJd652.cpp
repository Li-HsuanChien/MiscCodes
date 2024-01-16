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
    for(int i = 1; i < n; ++i) {
        for(int j = 0; i+j < n; ++j) {
            dp[j][i+j] = max(s[j] - dp[j+1][i+j], s[i+j] - dp[j][i+j-1]);
            test = dp[i][j];
        }
    }
    cout << dp[0][n-1] << '\n';
    return 0;
}

