#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &i:a)
        cin >> i;

    sort(a.begin(), a.end());

    int cnt=1;
    for (int i=1; i<n; i++){
        if (a[i]!=a[i-1])
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