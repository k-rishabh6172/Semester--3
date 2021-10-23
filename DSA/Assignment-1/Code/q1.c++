#include <bits/stdc++.h>
using namespace std;


void solve(){
    //taking inputs :
    int n ; cin >> n ; 
    string name[n], number[n];
    for(int i = 0 ; i < n ; i++){
        cin >> name[i] >> number[i];
    }

    //sorting in the order of names using bubble sort : 
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(name[i] > name[j]){
                swap(name[i], name[j]);
                swap(number[i], number[j]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout << name[i] << " " << number[i] << endl ;
    }

    //for finding the name of the person with the given phone number : 
    string phone_number; cin >> phone_number ;
    for(int i = 0 ; i < n ; i++){
        if(number[i] == phone_number){
            cout << "Name Telephone Number \n";
            cout << name[i] << " " << phone_number << endl ;
            return ;
        }
    }

    cout << "Name Telephone Number \n";
    cout << "The Entered Number is not in the directory";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1 ;
    while(t--){
        solve();
        cout << endl ;
    }
}
