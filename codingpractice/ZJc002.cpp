#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int F(int a){
	if(a <= 100) return F(F(a+11));
	else if(a>= 101) return a-10;
	
}

int main(){
	int x;
	while(true){
	
		cin >> x;
		if (x == 0) break;
		cout << "f91(" << x << ") = " << F(x) << "\n";
		
	}
	return 0;
	
}
