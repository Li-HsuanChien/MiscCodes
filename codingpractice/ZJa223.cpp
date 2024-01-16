#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	
	
	int N;
	cin >> N;
	int a[N];
	for(int i = 0; i < N; i++)cin >> a[i];
	
	sort(a, a+N);
	
	for(int i = 0; i < N; i++)cout << a[i] << " ";
			
	return 0;	
	
}
