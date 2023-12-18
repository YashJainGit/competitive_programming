#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    bool a[n+1] = {};

    for (int i=0; i<n-1; i++){
        int x;
        cin >> x;
        a[x]=true;
    }
    for (int i=1; i<=n; i++){ 
        if (!a[i]){
            cout << i << '\n';   
        }
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}