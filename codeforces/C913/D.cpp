#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<pair<long long, long long>> seg(n);
    long long hi = 0;
    for (int i=0; i<n; i++) {
        cin >> seg[i].first >> seg[i].second;
        hi = max(seg[i].second, hi);

    }

    int lo=-1;
    long long best = INT_MAX;
    while (lo<hi){
        long long mid = lo+(hi-lo+1)/2;
        //cout << ">>>" << lo << ' ' << mid << ' ' << hi << '\n';

        bool win=true;
        long long l=0, r=0;
        for (int i=0; i<n && win; i++){
            l = max(l-mid, seg[i].first);
            r = min(r+mid, seg[i].second);

            if (l>r){
                win=false;
            }
        }
        //cout << (win? "win":"boohoo") << '\n';
        if (!win){
            lo=mid;
        }
        else{
            hi=mid-1;   
            best = mid;
        }
    }

    cout << best << '\n';
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
