#include<bits/stdc++.h>
#pragma GCC optimize("O3")
#define iooptimize ios_base::sync_with_stdio(false); cin.tie(0)
using namespace std;
void solve(){
    int n, k;
    while(cin >> n >> k){
        deque<int> mono_dq;
        vector<int> vec(n);
        for(auto &i:vec) cin >> i;
        k = min(n,k);
        for(int i = 0; i < n; i++){
            while(mono_dq.size()&&mono_dq.front() <= i-k){
                mono_dq.pop_front();
            }
            while(mono_dq.size() && vec[mono_dq.back()] > vec[i]){
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);
            if(i == k-1) cout << vec[mono_dq.front()];
            if(i > k-1) cout << " " << vec[mono_dq.front()];
        }
        cout << endl;
        mono_dq.clear();
        for(int i = 0; i < n; i++){
            while(mono_dq.size() && mono_dq.front() <= i-k){
                mono_dq.pop_front();
            }
            while(mono_dq.size() && vec[mono_dq.back()] < vec[i]){
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);
            if(i == k-1) cout << vec[mono_dq.front()];
            if(i > k-1) cout << " " << vec[mono_dq.front()];
        }
        cout << endl;
    }
    return;
}
signed main(){
    iooptimize;
    int cases = 1;
    while(cases--) solve();
    return 0;
}
