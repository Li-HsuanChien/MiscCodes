#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int size;
	cin >> size;
	int array[size];
	int ans = 0;
	for(int i=0; i<size; i++){
		cin >> array[i];
	}
	for(int i = 1; i<size; i++){
		if(array[i] < array[i-1]){
			ans += (array[i-1] - array[i]);
			array[i] = array[i-1];
		}
	}
	
	cout << ans;
			
	
	return 0;	
	
}
