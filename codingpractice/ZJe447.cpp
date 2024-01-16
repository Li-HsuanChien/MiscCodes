#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<queue> 
using namespace std;
int main(){
	int n, k, p;
	cin >>n;
	queue<int> g;
	
	for(int i = 0; i<n; i++){
		cin >> k;
		if(k == 1){
			cin >> p;
			g.push(p);
		}
		else if(k == 2){
			if(g.empty()){
				cout << "-1" << "\n";
			}
			else cout << g.front();
		}
		else if(k == 3){
			if(g.empty() == 1);
			else g.pop();
		} 
	}
	
	return 0;
}
