#include <iostream>
using namespace std;

int f(int n, int a=1, int b=1, int c=1) {
    if (n == 0) {
	return a+b; 
    }
    return f(n-1, b+c, a, b);
}

int main() {
    int N;
    while (cin >> N) {
	if (N == 1)      cout << 1 << '\n';
	else if (N == 2) cout << 2 << '\n';
	else             cout << f(N-3) << '\n';
    }
}
