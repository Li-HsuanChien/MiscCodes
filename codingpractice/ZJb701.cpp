#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, i, j, t, w, n, e, s, a, x2, y2;
    cin>>x>>y;
    int maze[x][y];
    int color[x][y];
    const int dir[4][2]={ {0,-1}, {0,1}, {-1,0}, {1,0} };
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            cin>>t;
            maze[j][i]=t;
            color[j][i]=0;
        }
    }
    
    queue<array<int, 2>> q;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            if(maze[j][i]==1&&color[j][i]==0){
                
                w=x+1;
                n=y+1;
                e=-1;
                s=-1;
                a=0;
                
                color[j][i] = 1;
                q.push({j, i});
                while (!q.empty()) {
                    auto [xx, yy] = q.front();
                    q.pop();
                    
                    if(xx<w)
                        w=xx;
                    if(yy<n)
                        n=yy;
                    if(xx>e)
                        e=xx;
                    if(yy>s)
                        s=yy;
                    a++;
                    
                    for (i=0;i<4;i++) {
                        x2 = xx +dir[i][0];
                        y2 = yy +dir[i][1];
                        if (color[x2][y2] == 0 && maze[x2][y2] == 1){
                            color[x2][y2] = 1;
                            q.push({x2, y2});
                        }
                    }
                }
                printf("%d %d %d %d %d\n",w,n,e,s,a);
            }
        }
    }
    return 0;
}
