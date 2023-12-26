#include <bits/stdc++.h>

using namespace std;

int mod=1e9+7;
void solve(){
    long long a,b;
    cin >> a >> b;

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