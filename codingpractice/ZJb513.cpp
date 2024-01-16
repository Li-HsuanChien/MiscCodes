#include <iostream>
#include <vector>
using namespace std;
const int MAXN = 1e6+5; //值域
bool isprime[MAXN];//是否有可能是質數
vector<int> prime;
int main() {
    for(int i = 2; i < MAXN; ++i) {
        isprime[i] = 1;
    }
    for(int i = 2; i < MAXN; ++i) {
        if(isprime[i]) prime.push_back(i);
        for(auto p : prime) {
            if(1ll * i * p > MAXN) break;
            isprime[i * p] = 0;
            if(!(i % p)) break;
        }
    }
    int Q;
    cin >> Q;
    for(int q = 0; q < Q; ++q) {
        int n;
        cin >> n;
        if(isprime[n]) cout << "Y\n";
        else cout << "N\n";
    }
}
