#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=true;
const string f="convention";
const int maxn = 2e5+10;

void solve(){
    int n, m, c;
    cin >> n >> m >> c;

    vector<int> t(n);
    for (int i=0; i<n; i++){
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    int lo=0, hi=2*t[n-1]+1;
    int best = INT_MAX;
    while (lo<=hi){
        int mid = (hi-lo)/2 + lo;
        //cout << mid << ' ';
        int i=0;
        int j=0;
        int d=1;
        for (; i<n; i++){
            if (i-j+1>c || t[i]-t[j]>mid){
                j=i;
                d++;
            }
        }

        if (d>m){
            lo = mid+1; 
        }
        else{
            best = min(best, mid);
            hi=mid-1;
        }
    }
    //cout << '\n';
    cout << best << '\n';
}  

int main(){
    if (filein){
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