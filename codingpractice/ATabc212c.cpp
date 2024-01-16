#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(0);
	int a, b, p1, p2;
	p1 = 0;
	p2 = 0;
	cin >> a >> b; 
	int arr1[a], arr2[b];
	for(int i=0; i<a; i++) cin >> arr1[i];
	
	for(int j=0; j<b; j++) cin >> arr2[j];
	int ans = 2147483647;
    sort(arr1,arr1+a);
    sort(arr2,arr2+b);
    while(p1<a && p2<b){
        ans = min(ans,abs(arr1[p1]-arr2[p2]));
        if(arr1[p1]<arr2[p2]){
            p1++;
        } else {
            p2++;
        }
	
    }
	cout << ans;
	return 0;	
	
}
