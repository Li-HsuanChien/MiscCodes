#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void sol(int a, int b, int c){
	int D;
	D = (b*b) - (4 * a *c);
	if(D < 0) cout << "No real root"; 
	else if(D == 0) cout << "Two same roots x=" << (-b)/ (2 * a);
	else  cout <<  "Two different roots x1="<< (-b + sqrt(D))/ (2*a) <<" , x2=" <<(-b - sqrt(D))/ (2*a) ;
}


int main(){
	int a, b, c;
	cin >> a >> b >> c;
	
	sol(a, b, c);
	
	return 0;
	
}
