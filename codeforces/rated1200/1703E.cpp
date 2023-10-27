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

    ll arr[n][n];
    for (ll i=0; i<n; i++){
        for (ll j=0; j<n; j++){
            char a;
            cin >> a;
            if (a=='1'){
                arr[i][j] = 1;
            }else{
                arr[i][j] = 0;
            }
        }
    }

    ll s=0;
    for (ll i=0; i<(n+1)/2; i++){
        for (ll j=0; j<(n)/2; j++){
            ll a = arr[i][j] + arr[j][n-i-1] + arr[n-j-1][i] + arr[n-i-1][n-j-1];
            if (a==1 || a==3){
                s+=1;
            }
            if (a==2){
                s+=2;
            }
        }
    }
    cout << s << '\n';
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