#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    vector<vector<bool>> tar(10, vector<bool>(10));
    vector<vector<int>> check(10, vector<int>(10));
    
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            char x;
            cin >> x;
            tar[i][j] = x=='X'; 
        }
    }
    

    int score =0;
    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (!tar[i][j])
                continue;
            if (i<6 && i>3 && j<6 && j>3)
                score+=5;
            else if (i<7 && i>2 && j<7 && j>2)
                score+=4;
            else if (i<8 && i>1 && j<8 && j>1)
                score+=3;
            else if (i<9 && i>0 && j<9 && j>0)
                score+=2;
            else
                score++;
            //cout << score << ' ' << i << ' ' << j << '\n';
        }
    }
    
    cout << score << '\n';
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