#include <bits/stdc++.h> 
using namespace std  ;
int main(){
    int n ; cin >> n ; 
    int power[n];
    for(int i = 0 ; i < n ; i++){
        cin >> power[i];
    }
    int hash[102];
    for(int i = 0 ; i < n ; i++){
        hash[power[i]]++;
    }

    int prefix[102];
    prefix[0] = hash[0];
    for(int i = 1 ; i < 102 ; i++){
        prefix[i] = prefix[i-1] + hash[i];
    }

    int q ; cin >> q ;
    while(q--){
        int k ; cin >> k ;
        cout << prefix[k] << endl ;
    }
    return 0 ;
}
