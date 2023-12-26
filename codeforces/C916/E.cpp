#include <bits/stdc++.h>
 
using namespace std;
 
const bool testcases=true;
 
vector<long long> a, b;
long long n;
 
void solve(){
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (long long &i:a)
        cin >> i;
    for (long long &i:b)
        cin >> i;
    
    
    vector<int> p(n);
    for (long long i=0; i<n; i++)
        p[i] = i;
 
    sort(p.begin(), p.end(), [](int i, int j){
        return (a[i]+b[i])>(a[j]+b[j]);
    });
    
    long long s=0;
    for (int i=0; i<n; i++){
        if (i%2==0){
            s+=a[p[i]]-1;
        }
        else{
            s-=b[p[i]]-1;
        }
    }
    cout << s << '\n';
 
    
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