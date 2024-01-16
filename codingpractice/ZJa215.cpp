#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	while ((cin >> n >> m)&& !cin.eof()) {
    	int k = 0;
		while(true){
			if((k+1) * (2*n + k) > 2*m) break;
			k+=1;
			
		}
		cout << k+1 << "\n";	
	}
	
	return 0;
	
}
