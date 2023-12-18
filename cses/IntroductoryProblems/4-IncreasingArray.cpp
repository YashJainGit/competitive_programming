#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    int cur, prev;
    long long ans=0;
    cin >> prev;

    for (int i=1; i<n; i++){
        cin >> cur;
        ans += max(0, prev-cur);
        prev = cur+max(0, prev-cur);
    }
    cout << ans << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}