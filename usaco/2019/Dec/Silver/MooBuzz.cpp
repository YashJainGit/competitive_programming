#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 1e6+1;


void solve(){
    int n;
    cin >> n;

    int lo=0, hi=2e9+10;
    while (lo<=hi){
        int mid = lo+(hi-lo)/2;
        //cout << mid << '\n';
        //cout << mid << '\n';
        int cur = mid - (mid/3) - (mid/5) + (mid/15);

        if (cur==n){
            if (mid%3==0 || mid%5==0){
                hi=mid;
                continue;
            }
            cout << mid << '\n';
            break;
        }
        else if (cur>n){
            hi = mid;
        }
        else {
            lo = mid;
        }


    }
}


int main(){
    if (filein){
        string f="moobuzz";
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