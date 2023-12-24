#include <bits/stdc++.h>

using namespace std;

const bool testcases = true;
void solve(){
    int n;
    cin >> n;

    int a[n+1]={};
    for (int i=0; i<n-1; i++){
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y]++;
    }
    int s=0;
    for (int i=0; i<=n; i++){
        if (a[i]>2){
            s+=a[i]-1;
        }
    }
    cout << s << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    int t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

