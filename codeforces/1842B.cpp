#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    
    ll n, x;
    cin >> n >> x;
    ll cur=0;
    for (ll i=0; i<3; i++){
        bool go=true;
        for (ll j=0; j<n; j++){
            ll y;
            cin >> y;
            if (((x^y)&y)==0 && go){
                cur |= y;
            }else{
                go=false;
            }
        }
    }
    if (cur==x){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
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

