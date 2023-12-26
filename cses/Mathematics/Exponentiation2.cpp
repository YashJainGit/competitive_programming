#include <bits/stdc++.h>

using namespace std;

int mod=1e9+7;
void solve(){
    long long a,b,c;
    cin >> a >> b >> c;

    long long exp=1;
    while (c!=0){
        if (c&1){
            exp=(exp*b)%(mod-1);
        }
        b = (b*b)%(mod-1);
        c>>=1;
    }
    b=exp;
    int ans=1;
    while (b!=0){
        if (b&1){
            ans=(ans*a)%mod;
        }
        a = (a*a)%mod;
        b>>=1;
    }
    cout << ans << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t;
    cin >> t;
    while (t--)	solve();

    return 0;
}
