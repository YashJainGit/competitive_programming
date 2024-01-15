#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int m, k, n1, nk;
    cin >> m >> k >> n1 >> nk;

    nk += (n1-m%k)/k;
    n1 = (n1-m%k)%k;
    cout << n1 << ' ' << nk << ' ';

    int ans = max(0, m/k-nk);
    ans += max(0, m%k-n1);

    cout << n1 << ' ';
    cout << m/k-nk << ' ' << m%k-n1 << ' '; 
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