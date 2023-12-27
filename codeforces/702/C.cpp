#include <bits/stdc++.h>
using namespace std;
 
const bool testcases = false;
 
void solve(){
    int n, m;
    cin >> n >> m;

    int h[n], t[m];
    for (int &i:h) cin>>i;
    for (int &i:t) cin>>i;

    int i=0, j=0;
    int k=0;
    while (i<n){
        if (j<m || abs(t[j]-h[i])<=abs(t[j+1]-h[i])){
            k = max(k, abs(t[j]-h[i]));
            i++;
        }
        else{
            j++;
        }
    }

    cout << k << '\n';
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

