#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int N,K,arr[500000+10];
bool fit(int target){
	int cover = 0;
	int stand = 0;
	
	for(int i=0; i<N; i++){
    	if(arr[i] > cover){
    		cover = arr[i] + target;			
    		stand++;
    	}
	} 
	if(stand > K) return false;
	else return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	cin >> N >> K;
	
	for(int i = 0; i < N; i++) cin >> arr[i]; 
	
	sort(arr, arr + N);
	
	int r = arr[N - 1] - arr[0] + 1;
	int l = 1;
	int m;
	
	while(l < r){
		if(r == l+1){
			if(!fit(l)) l = r;
			break;
		}
		m = (l + r) / 2;
		if(fit(m)) r = m;
		else l = m + 1;
	}
	cout << l;
	return 0;	
}
