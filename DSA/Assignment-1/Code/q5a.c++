#include <bits/stdc++.h>
using namespace std;

void solve(){
    //taking inputs and storing it in 1d array of size m*n :  
    int n , m ; cin >> n >> m ;
    int matrix[n*m];
    for(int i = 0 ; i < n*m ; i++){
        cin >> matrix[i];
    }
    int x ; cin >> x ;
    int position = -1 ;

    //searching key in the array 
    for(int i = 0 ; i < m*n ; i++){
        if(matrix[i] == x){
            position = i+1;
            break;
        }
    }
    //returning the rows and columns if element is found 
    (position != -1)?cout << "1 , " << ceil(position/(float)n) << "*" <<  (position-1)%n + 1 : cout << 0 ;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t ;
    while(t--){
        solve();
        cout << endl ;
    }
    
}
