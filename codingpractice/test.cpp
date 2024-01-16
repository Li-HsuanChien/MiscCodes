
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> nums = {9,1,4,7,3,-1,0,5,8,-1,6};
	int max_cnt = INT_MIN;
    int cnt = (nums.size() > 0) ? 1 : 0;
    set<int> st;
    for(int i = 0; i < nums.size(); i++){
        st.insert(nums[i]);
    }
    int temp = *st.begin();
    for(auto x: st){
        if(x != *st.begin()){
            if(x == temp + 1){
                cnt++;
                temp = x;
            }
            else{
                max_cnt = max(max_cnt, cnt);
                cnt = 0;
                temp = x;
            }
            
        }
    }
    max_cnt = max(max_cnt, cnt);
    cout << max_cnt;
}
        


