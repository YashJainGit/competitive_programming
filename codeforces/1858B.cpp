#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n, m, d;
    cin >> n >> m >> d;

    ll a[n+1]={0};
    ll s[m+1];
    s[0]=1;
    cout << '>' << m <<'\n';
    for (ll i=1; i<=m; i++){
        cin >> s[i];
        a[i]++
        for (ll j=s[i-1]; j<=s[i]; j+=d){
            a[j]++;
        }
    }
    cout << ">>";
    for (auto i:a){
        cout << i << ' ';
    }
    cout << '\n';
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}

        