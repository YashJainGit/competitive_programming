#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<long long> a(n);
    long long lo=INT_MAX;
    long long hi=0;
    for (long long &i:a){
        cin >> i;
        hi = max(i, hi);
        lo = min(i, lo);
    }
    

    sort(a.begin(), a.end());

    long long mid = a[n/2];

    long long x=0;
    for (int i=0; i<n; i++){
        x+=abs(a[i]-(mid));
    }
    cout << x;

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}