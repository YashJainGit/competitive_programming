#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n;
    string b;
    cin >> n >> b;
    
    ll p=0, m=llmax;
    ll cur=0, ans=0;
    for (ll i=0; i<n; i++){
        ll a;
        cin >> a;
        if (b[i]=='0'){
            if (cur==1){
                if (p>m){
                    ans-=m;
                    ans+=p;
                }
            }
            cur=0;
            p=a;
            m=llmax;
        } else{
            cur=1;
            m = min(a, m);
            ans+=a;
        }
    }
    if (cur==1 ){
        if (p>m){
            ans-=m;
            ans+=p;
        }
    }

cout << ans << '\n';
    
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