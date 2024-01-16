#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int n, k, arr[500000+10];

bool fit(int r){
	int cover = 0;
	int stand = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] > cover){
			cover = arr[i] + (2 * r);
			stand++;
		}
	}
	if(stand > k) return false;
	else return true; 
}

int main(){

	
	int T;
	cin >> T;
	for(int j = 0; j < T; j++){
		cin >> n >> k;
		for(int i = 0; i < n; i++) cin >> arr[i];
		sort(arr, arr + n);
	
		int l, r, m;
		l = 0;
		if((arr[n - 1] - arr[0]) % 2 == 1) r = (arr[n-1] + 1 - arr[0]) / 2;
		else r = (arr[n - 1] - arr[0])/ 2;
		
		while(l < r){
			if(r == l+1){
				if(!fit(l)) l = r;
				break;
			}
			m = (l + r) / 2;
			if(fit(m)) r = m;
			else l = m + 1;
		}
		cout << l << "\n";	
	}
	return 0;	
}
