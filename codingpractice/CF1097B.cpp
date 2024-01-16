#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	
	int i, j, k, n, m, sum;
    cin >> n;

    int a[n];
    for(i = 0; i < n; i++) cin >> a[i];
    m=1<<n;
    for(i = 0; i < m; i++){
        sum = 0;
        for(j = 0; j < n; j++){
            if((1<<j)&i) sum+=a[j];
            else sum-=a[j];
        }

        if(sum % 360 == 0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
