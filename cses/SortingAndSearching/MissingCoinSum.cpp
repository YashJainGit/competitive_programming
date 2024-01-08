#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    sort(a.begin(), a.end());
    long long s=1;

    for (int i=0; i<n && a[i]<=s; i++){
        s+=a[i];
    }

    cout << s << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}