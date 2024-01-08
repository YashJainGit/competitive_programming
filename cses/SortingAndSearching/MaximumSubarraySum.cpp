#include <bits/stdc++.h>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    long long m=INT_MIN;
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
        m = max((long long)i, m);
    }

    long long s=a[0];
    for (int i=1; i<n; i++){
        s+=a[i];
        s = max((long long)a[i], s);
        m = max(m, s);
    }
    cout << m << '\n';
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}