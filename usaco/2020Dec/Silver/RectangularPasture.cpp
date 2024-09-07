#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;
const int maxn = 5001;


struct coor{
    int x, y;
};

void solve(){
    int n;
    cin >> n;

    vector<coor> a(n);

    for (int i=0; i<n; i++){
        cin >> a[i].x >> a[i].y;
    }

    sort(a.begin(), a.end(), [&](coor p, coor q){return p.x<q.x;});

    ll ans=1;
    for (int i=0; i<n; i++){
        for (int j=i; j<n; j++){
            ll hi=0;
            ll lo=0;
            for (int k=i; k<=j; k++){
                if (a[k].y<=min(a[i].y, a[j].y)){
                    lo++;
                }
                if (a[k].y>=max(a[i].y, a[j].y)){
                    hi++;
                }
            }
            ans+=hi*lo;
        }
    }

    cout << ans << '\n';


}   


int main(){
    if (filein){
        string f="";
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