#include <bits/stdc++.h>
using namespace std;

int main(){
    //taking inputs :
    int n , q ; cin >> n >> q ;
    vector<pair<int,int>> v;

    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        v.push_back({x, 0});
    }
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        v[i].second = x ;
    }

    //sorting the vector pair in descending order : 
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    //prefix array to store running sum of all indices : 
    vector<int> prefix ;
    prefix.push_back(v[0].first);

    for(int i = 1 ; i < n ; i++){
        prefix.push_back(v[i].first + prefix[i-1]);
    }

    //printing output for q queries :
    while(q--){
        int k ; cin >> k;
        cout << prefix[k-1] << endl ;
    }
}

//Time complexity :
// # Worst Case : The best case time complextiy is O(n + nlogn + q) = O(nlogn). The sorting of vector takes O(nlogn) time using inbuilt usage of sort which is made up of 3 sorting algos and called introsort.
// # Best Case : The worst case complexity is also O(nlog(n)) as sorting is always required. 
