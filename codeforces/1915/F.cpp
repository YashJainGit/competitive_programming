#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<pair<int, int>> p;

    for (int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        p.emplace_back(a, b);
    }

    sort(p.begin(), p.end());
    
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