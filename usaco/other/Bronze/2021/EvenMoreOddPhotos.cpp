
#include <bits/stdc++.h>

using namespace std;

bool testcases=false;
bool filein=false;

void solve(){
    int n;
    cin >> n;

    int odd=0, even=0;
    for (int i=0; i<n; i++){
        int x;
        cin >>x;
        if (x%2){
            odd++;
        }
        else{
            even++;
        }
    }

    int g=0;
    while (true){

        if (g%2==0){
            if (even>=1){
                even--;
            }
            else if (odd>=2){
                odd-=2;
            }
            else{
                if (odd==1){
                    g--;
                }
                break;
            }
        }
        else{
            if (odd>=1){
                odd--;
            }
            else{
                break;
            }
        }

        g++;

    }
    cout << g << '\n';
    
}

int main(){
    
    if (filein){
         string f="";
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
