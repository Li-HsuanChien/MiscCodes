#include<bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); 
using namespace std;

int main(){
	io;
	int t, i, j, temp;
	cin >> t;
	int arr[t], count[t];
	for(i = 0; i < t; i++) cin >> arr[i];
	for(i = 0; i < t; i++){
		int cnt = 0;
		for(j = i + 1; j < t; j++){
			temp = arr[i];
			if(arr[j] < temp){
				if(arr[j] < arr[i]){
					temp = arr[j];
					cnt += 1;
				}
				else{
					cnt += 1;
					temp = min(temp, arr[j]);
				}
			}
			else{
				cnt += 1;
				break;
			}
		}	
		count[i] = cnt;
	}
	for(i = 0; i < t-1; i++) cout << count[i] << "\n";
	cout << "0";
	
	return 0;	
	
}
