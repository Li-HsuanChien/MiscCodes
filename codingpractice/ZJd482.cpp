#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	long long N;
	while(cin >> N){
		long long arr[N][N];
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				cin >> arr[i][j];
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(i == 0 && j == 0) ;
				else if(j == 0) arr[i][j] = arr[i - 1][j] +  arr[i][j];
				else if(i == 0) arr[i][j] = arr[i][j-1] +  arr[i][j];
				else arr[i][j] = max(arr[i - 1][j], arr[i][j-1]) +  arr[i][j];	
			}
		}	
		cout << arr[N - 1][N - 1] << "\n";	 	
	}
	return 0;
}
