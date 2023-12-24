#include <bits/stdc++.h>
using namespace std;

const bool testcases = true;

void solve(){
    bool u=0, d=0, r=0, l=0;

    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;

        if (y>0)
            u=1;
        if (y<0)
            d=1;
        if (x>0)
            r=1;
        if (x<0)
            l=1;
    }

    if (u+d+r+l==4){
        cout << "No\n";
    }
    else{
        cout << "Yes\n";
    }
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

