#include <bits/stdc++.h>
using namespace std;

int main(){
    //taking inputs
    int n, k ; cin >> n >> k;
    int price[n];
    for(int i = 0 ; i < n ; i++){
        cin >> price[i];
    }

    //sorting the prices in ascending order for minimum cost 
    sort(price, price+n);

    //traversing through the array, to find out the minimum number of items to be bought to get it in mimimum cost  
    int idx1 = 0 , minimum_cost = 0 , idx2 = n-1 ;
    while(idx1 < idx2){
        minimum_cost += price[idx1++];
        idx2 -= (k-1) ;
    }
    cout << minimum_cost << " ";

    //sorting the prices in ascending order for minimum cost 
    sort(price, price+n, greater<int>());

    //traversing through the array, to find out the minimum number of items to be bought to get it in mimimum cost  
    int  maximum_cost = 0 ;
    idx1 = 0 , idx2 = n-1 ;
    while(idx1 < idx2){
        maximum_cost += price[idx1++];
        idx2 -= (k-1) ;
    }
    cout << maximum_cost << "\n";

}

//Time complexity :
// # Worst Case : The best case time complextiy is O(n + nlogn) = O(nlogn). The sorting of vector takes O(nlogn) time using inbuilt usage of sort which is made up of 3 sorting algos and called introsort.
// # Best Case : The worst case complexity is also O(nlog(n)) as sorting is always required. 
