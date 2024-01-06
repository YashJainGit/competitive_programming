#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    int ans=1;
    vector<int> a(n);
    cin >> a[0];
    int m=0;
    for (int i=1; i<n; i++){
        cin >> a[i];
        if (a[m] > a[i]){
            m = i;
        }
    }
    a[m]++;

    for (int i:a){
        ans*=i;
    }

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