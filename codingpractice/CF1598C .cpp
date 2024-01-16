#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N, n, sum, temp, tar, ans;
	cin >> N;
	for(int i=0; i<N; i++){
		
		cin >> n;
		int a[n];
		sum= 0;
		ans = 0;
		for(int j=0; j<n; j++){
			cin >> temp;
			a[j] = temp;
			sum += temp; 
		}
		tar= 2 * sum / n;
		for(int l=0; l<n; l++){
			for(int p=l; p<n; p++ ){
				if(a[l] + a[p] == tar && l != p) ans += 1; 
			}
		}
		cout << ans;
	}
	
	return 0;
	
}
