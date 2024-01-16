#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int array[n][m];
	int plus[n][m];
	

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			plus[i][j] = 0;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> array[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i>0){
				plus[i][j] += array[i-1][j];
				if(j>0)plus[i][j] += array[i-1][j-1];
				if(j<m-1)plus[i][j] += array[i-1][j+1];
			}
			if(i<n-1){
				plus[i][j] += array[i+1][j];
				if(j>0)plus[i][j] += array[i+1][j-1];
				if(j<m-1)plus[i][j] += array[i+1][j+1];
			}
			if(j>0)plus[i][j] += array[i][j-1];
			if(j<m-1)plus[i][j] += array[i][j+1];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout << plus[i][j] << " " ;
		}
		cout << "\n" ;
	}
}
