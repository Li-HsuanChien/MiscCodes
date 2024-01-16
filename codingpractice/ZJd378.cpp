#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int N, M;
	int cas = 0;
	while(cin >> N && !cin.eof()){
		cin >> M;
		cas += 1;
		
		int arr[N][M];
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				cin >> arr[i][j];
			}
		}
		
		for(int i = 0; i < N; i++){
			for(int j = 0; j < M; j++){
				if(i == 0 && j == 0) ;
				else if(j == 0) arr[i][j] = arr[i - 1][j] +  arr[i][j];
				else if(i == 0) arr[i][j] = arr[i][j-1] +  arr[i][j];
				else arr[i][j] = min(arr[i - 1][j], arr[i][j-1]) +  arr[i][j];		
			}
		}
		cout << "Case #" << cas << " :";
		cout << "\n" << arr[N - 1][M - 1] << "\n";	
	} 
	return 0;	
}
