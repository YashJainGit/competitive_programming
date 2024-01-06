#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> a(n);
    for (int i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> b(n);
    for (int i=0; i<m; i++)
        cin >> b[i];
    sort(b.begin(), b.end());

    int cnt=0;
    for (int i=0, j=0; i<n && j<m; i++){
        while (j<m && b[j]<a[i]-k){
            j++;
        }
        if (j>=m){
            break;
        }
        if (b[j]>a[i]+k){
            continue;
        }
        cnt++;
    }
    cout << cnt << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}