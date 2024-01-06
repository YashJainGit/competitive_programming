#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (int i=0; i<n; i++){
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b.begin(), b.end());

    
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