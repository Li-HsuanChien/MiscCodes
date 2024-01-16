#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	int n, m, q, temp, mx = -1000000;
	cin >> n >> m >> q;
	int a[n];
	int b[m];
	
	for(int i = 0; i < n; i++){
		cin >> temp;
		a[i] = temp;
		mx = max(mx, temp);
		
	} 
	for(int i = 0; i < m; i++){
		cin >> temp;
		b[i] = temp;
		mx = max(mx, temp);		
	} 
	
	for(int j = 0; j < q; j++){
		int l1, l2, r1, r2, cnt = 0;
		cin >> l1 >> r1 >> l2 >> r2;
		int tf[40000];
		for(int i = 0; i <= mx; i++) tf[i] = 0;
		for(int i = l1; i < r1; i++){
			tf[a[i]] += 1;
		}
		for(int i = l2; i < r2; i++){
			tf[b[i]] += 1;
		}
		for(int i = 0; i <= mx; i++){
			if(tf[i] & 1 == 1){
				cnt += 1;
				cout << i << " ";
			} 
		}
		cout << cnt << "\n";
		
	}
	
	return 0;
}
