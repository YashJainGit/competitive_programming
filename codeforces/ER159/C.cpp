#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);

    for (long long &i:a){
        cin >> i;
    }
    if (n==1){
        cout << 1 << '\n';
        return; 
    }

    sort(a.begin(), a.end());
    ll ldiff = a[1]-a[0];
    for (int i=2; i<n; i++){
        ll diff = a[i]-a[i-1]; 
        ldiff = __gcd(diff, ldiff);
    }

    ll na;
    for (int i=n-1; i>=0; i--){
        if (i==0 || a[i]-ldiff!=a[i-1]){
            na=a[i]-ldiff;
            break;
        }
    }

    ll ans=0;
    for (int i=0; i<n; i++){
        ans+=(a[n-1]-a[i])/ldiff;
    }
    ans+=(a[n-1]-na)/ldiff;

    cout << ans << '\n';

    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}