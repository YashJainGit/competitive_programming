#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=false;
const bool filein=false;
const int maxn = 3e5+4;


void solve(){
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> a(n);

    for (int i=0; i<n;i++){
        cin>>a[i].first>> a[i].second;
    }
    vector<int> d(n-1);
    for (int i=0; i<n-1;i++){
        d[i] = abs(a[i].first-a[i+1].first)+abs(a[i].second-a[i+1].second);
        cout << ' ' << d[i];
    }
    cout << '\n';
    vector<int> d2(n-2);
    for (int i=0; i<n-2;i++){
        d2[i] = abs(a[i].first-a[i+2].first)+abs(a[i].second-a[i+2].second);
        cout << d2[i] << ' ';
    }
    cout << '\n';

    vector<int> dd(n-2);
    for (int i=0; i<n-2; i++){
        dd[i]=i;
    }
    //sort(dd.begin(),.end(), [&]( p,  q){return p<q});

}


int main(){
    if (filein){
        string f="cowjog";
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