#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);
	
	int t, k;
	cin >> t;
	while(t--){
		cin >> k;
		while((k & (k - 1)) != 0) k = (k & (k - 1));
		cout << k - 1 << "\n";
	}
	
	return 0;	
}
