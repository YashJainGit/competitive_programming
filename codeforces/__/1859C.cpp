#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    int ans=0;
    for (int i=1; i<=n-2; i++){
        ans+= i*i;
    }
    ans+=(n-1)*n;
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