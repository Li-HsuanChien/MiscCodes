#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n, q;
	cin >> n >> q;
	int arr[n];
	int pre[n];
	
	
	for(int i = 0; i < n; i++)cin >> arr[i];
	
	pre[0] = arr[0];
	
	for(int i = 0; i < n; i++){
		if(i > 0) pre[i] = pre[i-1] + arr[i]; 
	}
	
	int a, b;
	
	//for(int i = 0; i < n; i++) cout << pre[i] << " ";
	
	for(int i = 0; i < q; i++){
		cin >> a >> b;
		cout << pre[b-1] - pre[a-2] << "\n"; 
	}
	
	return 0;
}
