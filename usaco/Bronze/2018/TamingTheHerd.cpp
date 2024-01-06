
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    a[0] = 0;

    for (int i=n-2; i>=0; i--){
        if (a[i]==-1 && a[i+1]>0){
            a[i] = a[i+1]-1;
        }
    }

    //for (int &i:a){
    //    cout << i << ' ';
    //}
    //cout << '\n';

    for (int i=1; i<n; i++){
        if (a[i]!=-1 && a[i-1]!=-1 && a[i]!=0 && a[i-1]+1!=a[i]){
            cout << -1 << '\n';
            return;
        }
    }

    int M=0, m=0;
    for (int i=0; i<n; i++){
        if (a[i]==0){
            m++;
            M++;
        }
        else if (a[i]==-1){
            M++;
        }
    }
    cout << m << ' ' << M << '\n'; 


}

int main(){
    
    if (filein){
         string f="taming";
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }

    int t=1; 
    if (testcases) cin>>t;
    while(t--) solve();

    return 0;
}
