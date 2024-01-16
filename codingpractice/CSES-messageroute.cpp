#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> ar[100001];
int dist[100001];
int par[100001];
bool vis[100001];

int n, m;

bool bfs(){
	queue<int> q;
	dist[1] = 1;
	vis[1] = 1;
	q.push(1);
	
	while(!q.empty()){
		int node = q.front();
		q.pop();
		if(n == node) return true;
		for(auto u:ar[node]){
			if(vis[u] == false){
				dist[u] = dist[node] + 1;
				vis[u] = true;
				par[u] = node;
				q.push(u);
			}
		}		
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	
	int a, b;
	
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		ar[a].push_back(b);
		ar[b].push_back(a);
	}
	if(bfs()){
		cout << dist[n] << "\n";
		
		int path = n;
		vector<int> res;
		while(path != 0){
			res.push_back(path);
			path = par[path];
		} 
		reverse(res.begin(), res.end());
		for(int node:res) cout << node << " "; 
	}
	else cout << "IMPOSSIBLE";
	
	return 0;
}
