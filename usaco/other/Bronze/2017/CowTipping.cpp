
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n;
    cin >> n;

    vector<vector<bool>> a(n, vector<bool>(n));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char c;
            cin >> c;
            a[i][j] = c=='1';
        }
    }

    int cnt=0;
    for (int i=n-1; i>=0; i--){
        for (int j=n-1; j>=0; j--){
            if (a[i][j]){
                cnt++;

                for (int x=0; x<=i; x++){
                    for (int y=0; y<=j; y++){
                        a[x][y] = !a[x][y];
                    }
                }
            }
        }
    }
    cout << cnt << '\n';
}

int main(){
    
    if (filein){
         string f="cowtip";
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
