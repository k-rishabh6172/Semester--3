#include <bits/stdc++.h>
using namespace std;

//binary searching the key in the sorted array : 
int binary_search(int arr[], int n, int k){
    int low = 0 , high = n-1 ;
    while(low < high){
        int mid = (low + high)/2 ;
        if(arr[mid] == k){
            return mid ;
        }else if(arr[mid] < k){
            low = mid + 1 ;
        }else{
            high = mid - 1 ;
        }
    }

    return -1 ;
}


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
    position = binary_search(matrix, n*m, x) + 1;

    //returning the rows and columns if element is found : 
    (position != 0)?cout << "1 , " << ceil(position/(float)n) << "*" <<  (position-1)%n + 1 : cout << 0 ;

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

//Algorithm : As the array given is always sorted , binary search can be applied to find if the key exists or not in O(log(n))
//Time complexity : 
// # Worst Case - O(log(n)) , the array input takes O(n) time and the same with linear search but for finding the element using binary search , time complexity is reduced to O(logn)
// # Best Case - O(1) , if the key is found at the starting index in linear search or in the mid in binary search, we can find it in constant time.   
