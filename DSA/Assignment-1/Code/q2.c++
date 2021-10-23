#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n ; cin >> n ;
    int hash[102] = {0};
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        hash[x]++;
    }
    for(int i = 0 ; i < 102 ; i++){
        if(hash[i] == 1){
            cout << i ;
            return ;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t ; cin >> t ;
    while(t--){
        solve();
        cout << endl ;
    }
}
