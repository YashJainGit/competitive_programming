#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    long long n, p, l, t;
    cin>>n>>p>>l>>t;

    long long cnt = 0;

    long long t2 = min((long long)(ceil(n/7.0)/2), (long long)ceil((double)p/(2*t+l)));
    p -= t2*(2*t+l);
    cnt+=t2;
    p=max(p, 0ll);
    
    long long t1 = min((long long)ceil(n/7.0)%2, (long long)ceil((double)p/(t+l)));
    p -= t1*(t+l);
    cnt+=t1;
    p=max(p, 0ll);

    long long t0 = (long long)ceil((double)p/l);
    p -= t0*(l);
    cnt+=t0;

    cout << max(0ll, n-cnt) << '\n';
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