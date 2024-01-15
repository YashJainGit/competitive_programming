
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=true;

void solve(){
    int n;
    cin >> n;

    vector<vector<int>> p(n, vector<int>(n));

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            char c;
            cin >> c;

            p[i][j] = c-'0';
        }
    }
    vector<bool> b(9);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (p[i][j]!=0){
                b[p[i][j]-1]=true;
            }
        }
    }    


    for (int k=1; k<=9; k++){
        int lx=n, ly=n;
        int hx=0, hy=0;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (p[i][j]==k){
                    ly = min(ly, j);
                    hy = max(hy, j);

                    lx = min(lx, i);
                    hx = max(hx, i);
                }
            }
        }

        for (int i=lx; i<=hx; i++){
            for (int j=ly; j<=hy; j++){
                if (p[i][j]!=k){
                    b[p[i][j]-1] = false; 
                }
            }
        }
    }

    int cnt=0;
    for (int i=0; i<9; i++){
        cnt+=b[i];
    }
    cout << cnt << '\n';
}

int main(){
    
    if (filein){
         string f="art";
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
