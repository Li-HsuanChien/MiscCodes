#include<bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
void solve(){
    int n,k;
    while(cin>>n>>k){
        deque<int> mono_dq;//��ն��C
        vector<int> vec(n);//��}�C
        for(auto &i:vec) cin>>i;
        k = min(n,k);//���Dk���i��>n
        //�̤p
        for(int i=0;i<n;i++){
            //���̤p�A�O�����C�̫e�̤p
            //�n�`�N�@�w�n�ˬd���C�̬O�_���F�褣�M�|RE
            while(mono_dq.size()&&mono_dq.front()<=i-k){
                //�p�G�ثe���C�̫e�����w�g�X�Ƶ��F
                mono_dq.pop_front();
            }
            while(mono_dq.size()&&vec[mono_dq.back()]>vec[i]){
                //�q�᭱�⤣�i�઺�}�l�R��
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);//�ثe�Ʀr��J���C
            if(i==k-1) cout<<vec[mono_dq.front()];
            //��k-1�ɤ~�����]�i�Ĥ@���Ƶ�
            if(i>k-1) cout<<" "<<vec[mono_dq.front()];
        }
        cout<<endl;
        mono_dq.clear();
        //�̤j
        for(int i=0;i<n;i++){
            while(mono_dq.size()&&mono_dq.front()<=i-k){
                mono_dq.pop_front();
            }
            while(mono_dq.size()&&vec[mono_dq.back()]<vec[i]){
                mono_dq.pop_back();
            }
            mono_dq.push_back(i);
            if(i==k-1) cout<<vec[mono_dq.front()];
            if(i>k-1) cout<<" "<<vec[mono_dq.front()];
        }
        cout<<endl;
    }
    return;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int cases = 1;
    //cin>>cases;
    while(cases--) solve();
    return 0;
}
