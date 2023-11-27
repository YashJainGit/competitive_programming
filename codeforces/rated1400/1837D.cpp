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
    cin >> n;

    string a;
    cin >> a;

    ll x=0, y=0;
    bool xb=false, yb=false;
    ll ans[n];
    for (ll i=0; i<n; i++){
        if (a[i] == '('){
            if (y>0){
                y--;
                ans[i] = 2;
                yb=true;
            }
            else{
                x++;
                ans[i] = 1;
                xb=true;
            }
        }
        else {
            if (x>0){
                x--;
                ans[i] = 1;
                xb=true;
            }
            else{
                y++;
                ans[i] = 2;
                yb=true;
            }
        }
    }

    if (x!=0 || y!= 0){
        cout << -1 << '\n';
        return;
    }
    //cout << xb << ' ' << yb << '\n';
    if (!(xb && yb)){
        cout << 1 << '\n';
        for (ll i:ans){
            cout << 1 << ' ';
        }
    }else{
        cout << 2 << '\n';
        for (ll i:ans){
            cout << i << ' ';
        }
    }
    cout << '\n';
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