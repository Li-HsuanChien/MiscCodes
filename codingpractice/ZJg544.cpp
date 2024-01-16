#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	long long N, K, ans;
	cin >> N >> K;
	ans = 0;
	
	int arr[2][N+1];
	for(int i=0; i<N; i++){
		cin >> arr[0][i];
	}
	for(int i=0; i<N; i++){
		cin >> arr[1][i];
	}
	arr[1][N+1] = 8977897;
	int temp = 0;
	for(int i=1; i<N+1; i++){
		if(arr[1][i] != arr[1][i-1]){
			ans += arr[0][temp];
			temp = i; 
		}
		else if(arr[0][temp] < arr[0][i]){
			temp = i;
		}	
	}
	cout << ans << "\n";
	
	
			
	
	
	
	return 0;	
	
}
