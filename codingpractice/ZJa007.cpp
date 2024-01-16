#include <iostream>
#include <vector>
using namespace std;
const long long MAXll = 2147483647; //办
bool isprime[MAXll];//琌Τ琌借计
vector<long long> prime;
int main() {
    for(int i = 2; i < MAXll; ++i) {
        isprime[i] = 1;
    }
    for(int i = 2; i < MAXll; ++i) {
        if(isprime[i]) prime.push_back(i);
        for(auto p : prime) {
            if( * i * p > MAXll) break;
            isprime[i * p] = 0;
            if(!(i % p)) break;
        }
    }
    int Q;
    while((cin >> Q) &&  !cin.eof() ){        	
		if(isprime[Q]) cout << "借计\n";
        else cout << "獶借计\n";    	
	}
}
