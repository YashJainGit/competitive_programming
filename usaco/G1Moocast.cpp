#include <bits/stdc++.h>
using namespace std;

const bool testcases = false;

void solve(){
    int n;
    cin >> n;
    
    double d[n][n];
    pair<int, int> loc[n];
    for (int i=0; i<n; i++){
        cin >> loc[i].first >> loc[i].second;
    }

    double mx=0;
    for (int i=0; i<n; i++){
        double mn=int_max;
        for (int j=0; j<n; j++){
            if (j!=i)
                mn = min(mn, sqrt(pow(loc[i].first-loc[j].first, 2)+pow(loc[i].second-loc[j].second, 2)));
        }
        mx=max(mx, mn);
    }
    cout << ceil(pow(mx,2)) << '\n';
}

int main(){
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout<<fixed<<setprecision(0);
    freopen("moocast.in", "r", stdin);
	freopen("moocast.out", "w", stdout);

    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

