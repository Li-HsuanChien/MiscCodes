#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int> > pq;
	int c, n, k;
	cin >> k;
	k = k+1;
	while(k--){
		cin >> n;
		
		if(n == 1){
			cin >> c;
			pq.push(c);
		}
		else if(n == 2){
			if(pq.empty()) cout << "empty!";
			else{
				cout << pq.top() << "\n";
				pq.pop();
			}	
		}  
	} 
	return 0;
	
}


