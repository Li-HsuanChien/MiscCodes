#include<iostream>
#include<algorithm>
#include<queue>
#include<climits>
#include<vector>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;//吃得慢的放前面
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    while(cin>>n&&n){
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            vec.push_back(make_pair(a,b));
        }
        long long int ans = LLONG_MIN;//include<climits>
        long long int sum = 0;
        sort(vec.begin(),vec.end(),cmp);
        for(int i=0;i<n;i++){
            sum+=vec[i].first;
            ans = max(ans,(long long)sum+vec[i].second);
        }
        cout<<ans<<endl;
    }
}
