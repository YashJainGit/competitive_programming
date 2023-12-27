#include <bits/stdc++.h>
using namespace std;
 
const bool testcases = false;
 
void solve(){
    int n, x;
    cin >> n >> x;
 
    int a[n];
    for (int &i:a){
        cin >> i;
    }
 
    int l=0, r=0, c=0;
    int s=a[0];

    while (r<n){
        if (s==x){
            r++;
            s+=a[r];
            s-=a[l];
            l++;
            c++;
        }
        while (s<x){
            r++;
            s+=a[r];
        }
        while (s>x){
            s-=a[l];
            l++;
        }
    }
 
    cout << c << '\n';
 
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
