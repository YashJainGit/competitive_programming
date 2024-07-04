#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=true;
const int maxn = 1e6+1;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }

    long long s=a[n-1];
    long double mx=0;
    int mn = a[n-1];
    vector<int> l;

    for (int i=1; i<n-1; i++){
        s+=a[n-i-1];
        mn = min(mn, a[n-i-1]);
        long double cur = ((double)s-mn)/(i);
        //cout << s-mn << ' ' << i+1 << ' ' << cur << '\n';
        if (cur>mx){
            mx = cur;
            l={n-i-1};
        }
        else if (cur==mx){
            l.push_back(n-i-1);            
        }
    }
    for (int i=l.size()-1; i>=0; i--){
        cout << l[i] << '\n';
    }
    //cout << '\n';
}


int main(){
    if (filein){
        string f="homework";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(2);
    }
    
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;

}