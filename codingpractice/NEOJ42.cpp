#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, x, y, count, i, j, temp, x2, y2;
    char cr;
    cin >> t;
    for(int h = 0; h < t; h++){
    	cin >> n >> m;
    	int mat[n][m];
    	int color[n][m];
    	count = 0;
    	const int dir[4][2]={ {0,-1}, {0,1}, {-1,0}, {1,0} };
    	for(i = 0; i < n; i++){
    		for(j = 0; j < m; j++){
    			cin >> cr;
    			if(cr == 35) temp = 0;
    			else temp = 1;
    			mat[j][i] = temp;
    			color[j][i] = 0;
			}
		}
		queue <array<int, 2>> q;
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if(mat[j][i] == 1 && color[j][i] == 0){
					color[j][i] = 1;
					q.push({j, i});
					
					while(!q.empty()){
						auto xx = q.front()[0];
						auto yy = q.front()[1];
						q.pop();
						for (int f=0; f < 4; f++) {
	                        x2 = xx + dir[f][0];
	                        y2 = yy + dir[f][1];
	                        if (color[x2][y2] == 0 && mat[x2][y2] == 1){
	                            color[x2][y2] = 1;
	                            q.push({x2, y2});
	                        }
	                    }
					}
					count += 1;
				}
			}
		}
		
		cout << count << "\n";
	}
    return 0;
}
