#include <bits/stdc++.h>
#include "lib1044.h"
using namespace std;

int main(){
  int n,i,j;
  long long l = 1, r = 2000000000;
  n = Initialize();
  while(l < r){
	if(Guess((l+r)/2) == 0){
		l = (l + r) / 2 + 1;
	}
	else r = (l + r) / 2;
  }
  
  Report(r);
  
  return 0;
}
