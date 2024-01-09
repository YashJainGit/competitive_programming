#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n-1; i++){
        a[i]=i+1;
    } 
    a[n-1]=0;
    
    int i=0;
    while (i!=a[i]){
        cout << a[i]+1 << ' ';
        a[i] = a[a[i]];
        i = a[i];
    }
    cout << i+1 << '\n';
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}