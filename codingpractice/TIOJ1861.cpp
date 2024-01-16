#include<iostream>
#include<queue>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n, temp;
	long long  pain;
	int v[100025];
	while(cin>>n && cin.eof()!=1){
		for(int i = 0; i < n; i++)cin >> v[i];
		priority_queue<int, vector<int>, greater<int> > pq(v, v+n);
		pain = 0;
		while(pq.size() > 1){
			temp = pq.top();
			pq.pop();
			temp += pq.top();
			pq.pop();
			pq.push(temp);
			pain += temp;
		}
		cout << pain << "\n";
		
	}
	return 0;
	
}


