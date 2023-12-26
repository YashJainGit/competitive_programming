#include <bits/stdc++.h>
using namespace std;

const int m_val=1000001;
int a[m_val]={};
void solve(){
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;
        a[x]++;    
    }

    for (int i=m_val-1; i>=1; i--){
        int c=0;
        for (int j=i; j<=m_val; j+=i){
            c+=a[j];
        }
        if (c>=2){
            cout << i << '\n';
            return;
        }
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    solve();

    return 0;
}