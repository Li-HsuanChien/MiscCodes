#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdi2o(false); cin.tie(0);
	priority_queue<long long,vector<long long>,greater<long long> > pq;
	int n, g;
	cin >> n;
	long long ans = 0;
	long long k=0;
	while(n--){
		cin>>g;
		k += g;
		ans++;
		pq.push(g);
		while(k<0){
			ans--;
			k -= pq.top();
			pq.pop();
		}
		
	}
	cout << ans;
			
	
	return 0;	
	
}
