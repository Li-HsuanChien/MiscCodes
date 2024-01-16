#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;


int main(){
	
	char p;
	int t;
	int k, flag = 0;
	cin >> t;
	string str;
	while(t--){
		cin >> str;
		stack<char> stk1;
		if(str.size() % 2 == 1){
			cout << "N" << "\n";
		}
		else{
			for(int j = 0; j < str.size(); j++){
				p = str[j];
				k = (int)p;
				if(k == 40|| k == 91|| k == 123|| k==60) stk1.push(k);
				//opening goes in stack
				else{
					switch(k){
						case 41: 
							if(stk1.top() != 40){
								cout << "N" << "\n";
								flag = 1;
								break;
							} 
							else{
								stk1.pop();
								break;
							}
						case 93:
							if(stk1.top() != 91){
								cout << "N" << "\n";
								flag = 1;
								break;
							} 
							else{
								stk1.pop();
								break;
							}
						case 125:
							if(stk1.top() != 123){
								cout << "N" << "\n";
								flag = 1;
								break;
							} 
							else{
								stk1.pop();
								break;
							}
						case 62:
							if(stk1.top() != 60){
								cout << "N" << "\n";
								flag = 1;
								break;
							} 
							else{
								stk1.pop();
								break;
							}
						default:
							cout << "N" << "\n";
							flag = 1;
							break;
				
					//check if closing match stack top if yes delete top no print N
					}
				}
			}
			if(stk1.empty()) cout << "Y" << "\n";
		}			
	}
	return 0; 		
}
