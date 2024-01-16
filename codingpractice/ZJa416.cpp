#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
void solve(){
    int n,k;
    while(cin>>n>>k){
        deque<int> mono_dq;//單調隊列
        vector<int> vec(n);//原陣列
        for(auto &i:vec) cin>>i;
        k = min(n,k);//此題k有可能>n
        //最小
        for(int i=0;i<n;i++){
            //對於最小，保持隊列最前最小
            //要注意一定要檢查隊列裡是否有東西不然會RE
            while(mono_dq.size()&&mono_dq.front()<=i-k){
                //如果目前隊列最前面的已經出滑窗了
                mono_dq.pop_front();
            }
            while(mono_dq.size()&&vec[mono_dq.back()]>vec[i]){
                //從後面把不可能的開始刪除
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);//目前數字放入隊列
            if(i==k-1) cout<<vec[mono_dq.front()];
            //到k-1時才正式包進第一次滑窗
            if(i>k-1) cout<<" "<<vec[mono_dq.front()];
        }
        cout<<endl;
        mono_dq.clear();
        //最大
        for(int i=0;i<n;i++){
            while(mono_dq.size()&&mono_dq.front()<=i-k){
                mono_dq.pop_front();
            }
            while(mono_dq.size()&&vec[mono_dq.back()]<vec[i]){
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);
            if(i==k-1) cout<<vec[mono_dq.front()];
            if(i>k-1) cout<<" "<<vec[mono_dq.front()];
        }
        cout<<endl;
    }
    return;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int cases = 1;
    //cin>>cases;
    while(cases--) solve();
    return 0;
}
