#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
const bool filein=false;

void solve(){


        int n;
        cin >> n;
        vector<int> a(n);
        for (int &i:a){
            cin >> i;
        }

        vector<ll> pf(n+1);
        vector<ll> sf(n+1);

        for (int i=0; i<n; i++){
            pf[i+1] = pf[i]+a[i];
            sf[n-i-1] = sf[n-i]+a[n-i-1];
        }

        ll m=0;
        vector<int> inds;
        for (int i=0; i<=n; i++){
            //cout << pf[i] << ' ' << sf[i] << '\n';
            int f = abs(pf[i])+sf[i];
            if (f>m){
                m = f;
                inds = {i};
            }
            else if (f==m){
                inds.push_back(i);
            }
        }
        cout << m << '\n';

}


int main(){
    if (filein){
        string f="stacking";
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