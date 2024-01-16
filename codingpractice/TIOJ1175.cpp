#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    int n; 
    cin >> n;
    vector<int> LIS;
    int buf;
    for(int i = 0; i < n; i++) {
        cin >> buf; 
        if(LIS.empty() || buf > LIS.back()) LIS.push_back(buf);
        else {
            auto p = lower_bound(LIS.begin(), LIS.end(), buf); 
            LIS[*p] = buf; 
        }
    }
    cout << LIS.size();
    cout << '\n';
    return 0;
}


