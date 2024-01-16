#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){	
	int n, k, l, r, flag, m;
	cin >> n >> k;
	int arr1[n], arr2[k];
	
	for(int i = 0; i < n; i++){
		cin >> arr1[i];
	}
	for(int i = 0; i < n; i++){
		cin >> arr2[i];
	}
	
	for(int cas = 0; cas < k; cas++){
		flag = 0;
		l = 0;
		r = n-1;
		while(l <= r){
			m = (l+r)/2;
			if(arr2[cas] > arr1[m]) l = m + 1;
			else if(arr2[cas] < arr1[m]) r = m - 1;
			else if(arr2[cas] == arr1[m]){
				cout << m + 1 << "\n";
				flag = 1;
				break;
			}
		}
		if(flag == 0) cout << "0" << "\n";
	}
	return 0;	
}
