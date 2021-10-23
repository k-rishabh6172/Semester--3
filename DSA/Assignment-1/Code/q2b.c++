#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n ; cin >> n ;
    int ans ; cin >> ans ;
    for(int i = 1 ; i < n ; i++){
        int a ; cin >> a ;
        ans = int(ans^a);
    }
    cout << ans ;
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
