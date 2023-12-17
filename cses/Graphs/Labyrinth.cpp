#include <bits/stdc++.h>
using namespace std;


int n, m;
bool a[1001][1001];   
int v[1001][1001];
string p;
int sr, sc, er, ec;


long trav(int i, int j){
    if (i==er && j==ec)
        return 1;
    else if (i<0 || i>=n || j<0 || j>=m || !a[i][j])
        return LONG_MAX;
    else if (v[i][j]!=-1)
        return v[i][j];

    v[i][j] = LONG_MAX;

    char dir = '.';
    long best = LONG_MAX;

    int cur = trav(i+1, j);
    if (cur<best){
        best = cur;
        dir = 'D';
    }
    cur = trav(i-1, j);
    if (cur<best){
        best = cur;
        dir = 'U';
    }
    cur = trav(i, j+1);
    if (cur<best){
        best = cur;
        dir = 'R';
    }
    cur = trav(i, j-1);
    if (cur<best){
        best = cur;
        dir = 'L';
    }
    v[i][j] = best;
    p+=dir;
    return best;

}

void solve(){   
    cin >> n >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            v[i][j] = -1; 
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            char x;
            cin >> x;

            a[i][j] = x!='#';
            if (x=='A'){
                sr = i;
                sc = j;
            }
            else if (x=='B'){
                er = i;
                ec = j;
            }
        }
    }

    int res = trav(sr, sc);
    if (res<INT_MAX){
        cout << "YES\n" << res << '\n';
        reverse(p.begin(), p.end());
        cout << p;
        cout << '\n';
    } 
    else{
        cout << "NO\n";
    }
    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    solve();
    return 0;
}