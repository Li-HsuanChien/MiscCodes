#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<stack> 
using namespace std;

void train(stack<int> a, stack<int> b){
	int car, flag;
	flag = 0;
	while(flag == 0){
		cin >> car;
		if(car == 0) break;
		
		if(!a.empty() && car == a.top()){
			a.pop();
		} 
		else if(!b.empty() && car == b.top()){
			b.pop();
			if(!b.empty())train(a, b);
		} 
		else if (!a.empty() && car != a.top()){
			while(!a.empty() && car != a.top()){
				b.push(a.top());
				a.pop();
			}
			a.pop();
		}
		
		if(a.empty() && b.empty()){
			cout << "Yes";
			break;
		}
		else if(a.empty() && car != b.top() + 1){
			cout << "No";
			break;
		} 
		
		
	}
}


int main(){
	int n;
	while(true){
		cin >> n;
		if(n==0)break;
		stack<int> a;
		stack<int> b;
		for(int i = n;  i > 0; i--){
			a.push(i);
		}
		train(a, b);
	}
	
	return 0;
}


