#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    cin >> a[0];
    int lo =a[0];
    int hi =a[0];
    for (int i=1; i<n; i++){
        cin >> a[i];
        lo = min(lo, a[i]);
        hi = max(hi, a[i]);
    } 

    int d = hi-lo;
    if (d==0){
        cout << 0 << '\n';
        return;
    }

    int ans = log2(d)+1;
    cout << ans << '\n';
    if (ans<=n){
        for (int i=0; i<ans; i++){
            cout << lo+d/2-((hi-d+1)%2) << ' ';
        }
        cout << '\n';
    }
    
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