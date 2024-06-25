#include <bits/stdc++.h>
 
using namespace std;
using ll=long long;
 
const bool testcases=true;
void solve(){
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int &i:a){
        cin >> i;
    }
 
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++){
        cout << a[i] << ' '; 
    }
    cout << '\n';
    vector<int> s;
 
    for (int i=0; i<n; i++){
        int cnt = 1;
        while (i<n-1 && a[i]==a[i+1]){
            cnt++;
            i++;
        }
        s.push_back(cnt);
    }
    int k=0;
    long long ans =0;
    for (int i:s){
        if (i>=2){
            int n = i-2;
            ans += k*(n+1)+((n*(n+1)*(n+2))/6);
        }
        k+=i;
    }
    cout << ans << '\n';
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
