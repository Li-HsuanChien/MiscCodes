#include<iostream>
using namespace std;
int main(){
	int n, temp;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> temp;
		if(temp<=0) ;
		else if(temp>0) temp = 0;
		cout << temp;
		
	}
}
