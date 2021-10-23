#include <bits/stdc++.h>
using namespace std;


int main(){
    //taking inputs :
    int m , s, n ; cin >> m >> s >> n ;
    int size[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> size[i];
    }

    //initialising variable to count the number of swaps required to sort :
    int inversions = 0 ;

    //sorting in the order of names using bubble sort and finding the inversions: 
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(size[i] > size[j]){
                swap(size[i], size[j]);
                inversions++;
            }
        }
    }

    //checking whether it is possible to do in m minutes or not :  
    (m*60 >= inversions*s)?cout << true : cout << false ;
    return 0 ;
}

//Improvement : The time complexity can be improved using sorting and then counting the number of inversions using two pointers to O(nlogn)
//Time complexity :
// # Worst Case : O(n^2) , Bubble sort is used to count the number of inversions which results in n^2 iterations in worst case.
// # Best Case : O(n) , if the array is already sorted , the best case complexity turns out to be O(n)
