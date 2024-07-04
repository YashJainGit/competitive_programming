#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 1e6+1;

void solve(){
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }
    sort(a.begin(),a.end());

    int lo=0, hi=a[n-1]-a[0]+10;
    int best = INT_MAX;
    while (lo<hi){

        int mid = lo+(hi-lo)/2;
        int b=a[0], r=1, h=0;
        for (int i=1; i<n; i++){
            if (((a[i]-b+1)>mid) || (h>c)){
                b=a[i];
                r++;
                h=0;
            }
            h++;
        }
        
        if (r>m){
            lo = mid+1;
        }
        else{
            hi = mid;
            best = min(best, mid);
        }
    }
    cout << best << '\n';
}


int main(){
    if (filein){
        string f="convention";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}