#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, s;
    cin >> n >> s;

    ll t=0, a[n], l=0, r=0;

    for (ll i=0; i<n; i++){
        cin >> a[i];
        t+=a[i];
        if (t<=s){
            r++;
        }
    }
    r--;

    if (t<s){
        cout << -1 << '\n';
        return;
    }else if(t==s){
        cout << 0 << '\n';
        return;
    }
    //cout << "hihi\n";
    //return;
    ll mr = r-l+1;
    //cout << 'm' << mr <<'\n';
    while(r<n){
        mr = max(r-l+1, mr);
        //cout << l << ' ' << r << '\n';
        
        
        while (a[l]!=1){
            l++;
        }
        l++;

        r++;
        while (r<n && a[r]!=1){
            r++;
        }while (r<n-1 && a[r+1]!=1){
            r++;
        }
    }
    cout << n-mr << '\n';
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