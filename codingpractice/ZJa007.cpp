#include <iostream>
#include <vector>
using namespace std;
const long long MAXll = 2147483647; //�Ȱ�
bool isprime[MAXll];//�O�_���i��O���
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
		if(isprime[Q]) cout << "���\n";
        else cout << "�D���\n";    	
	}
}
