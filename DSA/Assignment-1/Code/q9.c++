#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n ;
    int hash[102] = {0};
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        hash[x]++;
    }
    for(int i = 0 ; i < 102 ; i++){
        if(hash[i] > 0){
            cout << i << " " << hash[i] << endl ;
        }
    }
}

//Time complexity :
// # Worst Case : O(n) , The array is iterated once to make the hash array, resulting in linear complexity.
// # Best Case : O(n) , The array needs to be traversed atleast once, so in the best case also , time complexity is O(n).
