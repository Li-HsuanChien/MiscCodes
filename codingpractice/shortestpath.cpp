#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N, M;
	int case = 1;
	while(cin >> N && cin.eof() == false){
		cin >> M;
		case += 1;
		
		int arr[N][M];
		int dp[N][M];
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> arr[i][j];
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(i == 0 && j == 0) ;
				else if(j == 0) dp[i][j] = arr[i][j] - arr[i - 1][j];
				else if(i == 0) arr[i][j] = arr[i][j] - arr[i][j-1];
				else dp[i][j] = min(arr[i][j] - arr[i - 1][j] + dp[i-1][j], arr[i][j] - arr[i][j-1] + dp[i][j-1]);	
			}
		}	
		cout << arr[N - 1][N - 1] << "\n";
		
		
	} 
	return 0;	
}
