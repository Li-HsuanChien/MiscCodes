#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	
	int N, p;
	cin >> N;
	map<int, int> mp;;
	set<int> s;
	for(int i = 0; i < N; i++){
		cin >> p;
		if(!s.count(p)){
			cout << "N" << "\n";
			s.insert(p);
			mp[p] += 1;
		}
		else cout << "Y " << mp[p] << "\n";
			
	}
	return 0;	
	
}
