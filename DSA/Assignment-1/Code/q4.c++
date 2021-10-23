#include <bits/stdc++.h>
using namespace std;

void solve(){
    //taking inputs : 
    int n ; cin >> n ; 
    int arr[n];
    for(int i = 0 ; i < n ; i++){
    	cin >> arr[i];
    }

    //handling corner case : 
    if(n <= 2){
    	cout << "Total number of elements is less than 3";
    	return ;
    }

    //applying the 3 steps of inserting sort and sorting in decreasing order : 
    for(int i = 0 ; i < 3 ; i++){
    	int greater = INT_MIN , index;
    	for(int j = i+1 ; j < n ; j++){
    		if(greater < arr[j]){
    			greater = arr[j];
    			index = j ;
    		}
    	}
    	swap(arr[i], arr[index]);
    }
    cout << "The third largest element in the array is " << arr[2];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t ;
    while(t--){
        solve();
        cout << endl ;
    }
    
}


//Time complexity :
// # Worst Case : O(n) , The array is iterated atmost 3 times to find the 3rd largest number.
// # Best Case : O(n) , The array needs to be iterated atleast 3 times to find out the largest elements and insert it in the right order. 
