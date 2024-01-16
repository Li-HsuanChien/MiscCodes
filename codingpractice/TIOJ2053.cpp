#include <bits/stdc++.h>
#define F first
#define NL "\n"
#define mod 1000000007

using namespace std;

struct mat{
    long long a[2][2] = {{ 0 }};
    mat operator * (mat &inp){
        mat res;
        for(int i=0;i<2;++i)
            for(int j=0;j<2;++j)
                for(int k=0;k<2;++k)
                    res.a[i][j]=(res.a[i][j]+a[i][k]*inp.a[k][j])%mod;
        return res;
    }
};

mat base;
long long x1, x2, a, b, n;

mat fpow(long long k){
    if(k==1)
        return base;
    mat res=fpow(k/2);
    if(k & 1)
        return res*res*base;
    else
        return res*res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>x1>>x2>>a>>b>>n;

    base.a[0][0]=b;
    base.a[0][1]=1;
    base.a[1][0]=a;

    mat first;
    first.a[0][0]=x2;
    first.a[0][1]=x1;
    first.a[1][0]=x1;

    mat tmp=fpow(n-2);
    cout << (first*tmp).a[0][0] << NL;
}
