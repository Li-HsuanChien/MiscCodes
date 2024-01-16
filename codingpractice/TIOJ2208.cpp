#include<bits/stdc++.h>
using namespace std;

int dis[3005][3005];
int dis2[3005][3005];

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	
	int n, m, p, q, a, b, i, j, x2, y2, flag1 = 0, flag2 = 0;
	cin >> n >> m >> p >> q >> a >> b;
	
	int arr[n][m];
	int color[n][m];
	const int dir[8][2] = {{0, p}, {0, -p}, {p, 0}, {-p, 0},
					      {0, q}, {0, -q}, {q, 0}, {-q, 0}};
					      
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> arr[i][j];
			color[i][j] = 0;
		}
	}
	
	queue <array<int, 2>> que;
	dis[0][0] = 0;
	que.push({0, 0});
	
	while(!que.empty()){
		auto xx = que.front()[0];
		auto yy = que.front()[1];
		que.pop();
		for(int f = 0; f < 8; f++){
			x2 = xx + dir[f][0];
			y2 = yy + dir[f][1];
			if(x2 > -1 && x2 < n && y2 > -1 && y2 < m && arr[x2][y2] != 1){
				if(color[x2][y2] == 0){
					color[x2][y2] = 1;
					dis[x2][y2] = dis[xx][yy] + 1;
					que.push({x2, y2});
				if(x2 == a - 1 && y2== b - 1) flag1 = 1;
				}
			}
		}
		
	}
	
	queue <array<int, 2>> que2;
	dis2[a - 1][b - 1] = 0;
	que2.push({a - 1, b - 1});
	int color2[n][m];
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			color2[i][j] = 0;
		}
	}
	
	while(!que2.empty()){
		auto xx = que2.front()[0];
		auto yy = que2.front()[1];
		que2.pop();
		for(int f = 0; f < 8; f++){
			x2 = xx + dir[f][0];
			y2 = yy + dir[f][1];
			if(x2 > -1 && x2 < n && y2 > -1 && y2 < m && arr[x2][y2] != 1){
				if(color2[x2][y2] == 0){
					color2[x2][y2] = 1;
					dis2[x2][y2] = dis2[xx][yy] + 1;
					que2.push({x2, y2});
				if(x2 == n - 1 && y2== m - 1) flag2 = 1;
				}
			}
		}
		
	}
	
	if(flag1 && flag2) cout << dis[a - 1][b - 1] + dis2[n-1][m-1];
	else cout << "-1";
	
	return 0;
}

