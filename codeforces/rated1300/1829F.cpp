#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, m;

    cin >> n >> m;

    ll a[n+1]={};
    for ( ll i=0; i<m; i++){
        ll x, y;
        cin >> x >> y;
        
        a[x]++;
        a[y]++;
    }

    ll m1=0, m2=0;

    for (ll &i:a){
        if (i!=1){
            if (m1==0){
                m1==i;
            }else{
                m2==i;
                break;
            }
        }
    }

    ll mc1 = count(a, a+n, m1);
    if (m2==0){
        cout << m1 << ' ' << m1-1;
    }
    else{
        ll mc2 = count(a, a+n, m2);
        cout << m1 << ' ' << m2;
    }
    cout << '\n';
    `
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}