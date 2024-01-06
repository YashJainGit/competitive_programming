#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    int s=INT_MAX,p=INT_MAX;
    int ans=0;
    for (int i=1; i<n-1; i++){
        if (a[i]<=p){
            p=a[i];
        }
        else if (a[i]<=s){
            s=a[i];
        }
        else {
            ans++;
            p=a[i];
        }
        if (s<p) swap(s, p);
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