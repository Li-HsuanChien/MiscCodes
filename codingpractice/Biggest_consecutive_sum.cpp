#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int inputs;
	cin >> inputs;
	for(int i=0; i<inputs; i++){
		int size;
		cin >> size;
		int arr[size];
		int ans, templ, tempr;
		templ = 0;
		tempr = 0;
		ans = 0;
		for(int i=0; i<size; i++){
			cin >> arr[i];
			ans += arr[i];
		} 
		int k = 0;
		int p = size - 1;
		while(k<p){
			if(arr[k] <= 0 && ((-1 * templ) > arr[k])){
				ans -= arr[k];
				k +=1 ;
				ans -= templ;
				templ = 0;
			}
			else if(arr[p] <= 0 && ((-1 * tempr) > arr[p])){
				ans -= arr[p];
				p -= 1;
				ans -= tempr;
				tempr = 0;
			}
			else{
				templ += arr[k];
				tempr += arr[p];
				k += 1;
				p -= 1;
			}
		}
		
		cout << ans << "\n";
	}	
	return 0;	
}
